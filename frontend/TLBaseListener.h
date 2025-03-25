
// Generated from TL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "TLListener.h"


/**
 * This class provides an empty implementation of TLListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  TLBaseListener : public TLListener {
public:

  virtual void enterProgram(TLParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(TLParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(TLParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(TLParser::StatementContext * /*ctx*/) override { }

  virtual void enterTensorDecl(TLParser::TensorDeclContext * /*ctx*/) override { }
  virtual void exitTensorDecl(TLParser::TensorDeclContext * /*ctx*/) override { }

  virtual void enterAssignment(TLParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(TLParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterTensorLiteral(TLParser::TensorLiteralContext * /*ctx*/) override { }
  virtual void exitTensorLiteral(TLParser::TensorLiteralContext * /*ctx*/) override { }

  virtual void enterScalarLiteral(TLParser::ScalarLiteralContext * /*ctx*/) override { }
  virtual void exitScalarLiteral(TLParser::ScalarLiteralContext * /*ctx*/) override { }

  virtual void enterForLoop(TLParser::ForLoopContext * /*ctx*/) override { }
  virtual void exitForLoop(TLParser::ForLoopContext * /*ctx*/) override { }

  virtual void enterAddOp(TLParser::AddOpContext * /*ctx*/) override { }
  virtual void exitAddOp(TLParser::AddOpContext * /*ctx*/) override { }

  virtual void enterFuncCall(TLParser::FuncCallContext * /*ctx*/) override { }
  virtual void exitFuncCall(TLParser::FuncCallContext * /*ctx*/) override { }

  virtual void enterIdentifier(TLParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(TLParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterMatmul(TLParser::MatmulContext * /*ctx*/) override { }
  virtual void exitMatmul(TLParser::MatmulContext * /*ctx*/) override { }

  virtual void enterMulOp(TLParser::MulOpContext * /*ctx*/) override { }
  virtual void exitMulOp(TLParser::MulOpContext * /*ctx*/) override { }

  virtual void enterLiteral(TLParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(TLParser::LiteralContext * /*ctx*/) override { }

  virtual void enterSum(TLParser::SumContext * /*ctx*/) override { }
  virtual void exitSum(TLParser::SumContext * /*ctx*/) override { }

  virtual void enterParenExpr(TLParser::ParenExprContext * /*ctx*/) override { }
  virtual void exitParenExpr(TLParser::ParenExprContext * /*ctx*/) override { }

  virtual void enterGrad(TLParser::GradContext * /*ctx*/) override { }
  virtual void exitGrad(TLParser::GradContext * /*ctx*/) override { }

  virtual void enterFunctionCall(TLParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(TLParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterFunctionDecl(TLParser::FunctionDeclContext * /*ctx*/) override { }
  virtual void exitFunctionDecl(TLParser::FunctionDeclContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

