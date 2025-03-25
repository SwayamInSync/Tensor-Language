
// Generated from TL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "TLParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by TLParser.
 */
class  TLVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by TLParser.
   */
    virtual std::any visitProgram(TLParser::ProgramContext *context) = 0;

    virtual std::any visitStatement(TLParser::StatementContext *context) = 0;

    virtual std::any visitTensorDecl(TLParser::TensorDeclContext *context) = 0;

    virtual std::any visitAssignment(TLParser::AssignmentContext *context) = 0;

    virtual std::any visitTensorLiteral(TLParser::TensorLiteralContext *context) = 0;

    virtual std::any visitScalarLiteral(TLParser::ScalarLiteralContext *context) = 0;

    virtual std::any visitForLoop(TLParser::ForLoopContext *context) = 0;

    virtual std::any visitAddOp(TLParser::AddOpContext *context) = 0;

    virtual std::any visitFuncCall(TLParser::FuncCallContext *context) = 0;

    virtual std::any visitIdentifier(TLParser::IdentifierContext *context) = 0;

    virtual std::any visitMatmul(TLParser::MatmulContext *context) = 0;

    virtual std::any visitMulOp(TLParser::MulOpContext *context) = 0;

    virtual std::any visitLiteral(TLParser::LiteralContext *context) = 0;

    virtual std::any visitSum(TLParser::SumContext *context) = 0;

    virtual std::any visitParenExpr(TLParser::ParenExprContext *context) = 0;

    virtual std::any visitGrad(TLParser::GradContext *context) = 0;

    virtual std::any visitFunctionCall(TLParser::FunctionCallContext *context) = 0;

    virtual std::any visitFunctionDecl(TLParser::FunctionDeclContext *context) = 0;


};

