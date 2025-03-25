
// Generated from TL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  TLLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, TENSOR = 2, FOR = 3, IN = 4, SUM = 5, GRAD = 6, MATMUL = 7, 
    PLUS = 8, MUL = 9, EQ = 10, COMMA = 11, LPAREN = 12, RPAREN = 13, LBRACK = 14, 
    RBRACK = 15, LBRACE = 16, RBRACE = 17, SEMI = 18, INTEGER = 19, FLOAT = 20, 
    ID = 21, COMMENT = 22, WS = 23
  };

  explicit TLLexer(antlr4::CharStream *input);

  ~TLLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

