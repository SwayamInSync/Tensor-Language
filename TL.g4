grammar TL;

TENSOR  : 'tensor';
FOR     : 'for';
IN      : 'in';
SUM     : 'sum';
GRAD    : 'grad';
MATMUL  : 'matmul';
PLUS    : '+';
MUL     : '*';
EQ      : '=';
COMMA   : ',';
LPAREN  : '(';
RPAREN  : ')';
LBRACK  : '[';
RBRACK  : ']';
LBRACE  : '{';
RBRACE  : '}';
SEMI    : ';'; // Explicit statement termination

// Literals and identifiers
INTEGER : [0-9]+;
FLOAT   : [0-9]+ '.' [0-9]* | '.' [0-9]+;
ID      : [a-zA-Z_][a-zA-Z0-9_]*;

// Ignore whitespace and comments
COMMENT : '//' .*? '\n' -> skip;  // Skip single-line comments
WS      : [ \t\r\n]+ -> skip;     // Skip whitespace

// Parser Rules
// ------------
program     : (statement | functionDecl)* EOF;

statement   : tensorDecl SEMI
            | assignment SEMI
            | forLoop
            | expression SEMI
            ;

tensorDecl  : TENSOR ID EQ expression;

assignment  : ID EQ expression;

tensorLiteral : LBRACK (tensorLiteral (COMMA tensorLiteral)* | scalarLiteral (COMMA scalarLiteral)*) RBRACK;
scalarLiteral : INTEGER | FLOAT;

forLoop     : FOR ID IN ID LBRACE (statement)* RBRACE;

expression  : LPAREN expression RPAREN                       # ParenExpr
            | MATMUL LPAREN expression COMMA expression RPAREN # Matmul
            | SUM LPAREN expression RPAREN                    # Sum
            | GRAD LPAREN expression COMMA ID RPAREN          # Grad
            | expression (MUL | '*') expression               # MulOp // Higher precedence
            | expression (PLUS | '+') expression              # AddOp
            | ID                                              # Identifier
            | tensorLiteral                                  # Literal
            | functionCall                                    # FuncCall
            ;

functionCall: ID LPAREN (expression (COMMA expression)*)? RPAREN;

// Optional: Function declarations (future extensibility)
functionDecl: 'func' ID LPAREN (ID (COMMA ID)*)? RPAREN LBRACE statement* RBRACE;
