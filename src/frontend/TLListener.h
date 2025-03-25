
// Generated from TL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "TLParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by TLParser.
 */
class  TLListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(TLParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(TLParser::ProgramContext *ctx) = 0;

  virtual void enterStatement(TLParser::StatementContext *ctx) = 0;
  virtual void exitStatement(TLParser::StatementContext *ctx) = 0;

  virtual void enterTensorDecl(TLParser::TensorDeclContext *ctx) = 0;
  virtual void exitTensorDecl(TLParser::TensorDeclContext *ctx) = 0;

  virtual void enterAssignment(TLParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(TLParser::AssignmentContext *ctx) = 0;

  virtual void enterTensorLiteral(TLParser::TensorLiteralContext *ctx) = 0;
  virtual void exitTensorLiteral(TLParser::TensorLiteralContext *ctx) = 0;

  virtual void enterScalarLiteral(TLParser::ScalarLiteralContext *ctx) = 0;
  virtual void exitScalarLiteral(TLParser::ScalarLiteralContext *ctx) = 0;

  virtual void enterForLoop(TLParser::ForLoopContext *ctx) = 0;
  virtual void exitForLoop(TLParser::ForLoopContext *ctx) = 0;

  virtual void enterAddOp(TLParser::AddOpContext *ctx) = 0;
  virtual void exitAddOp(TLParser::AddOpContext *ctx) = 0;

  virtual void enterFuncCall(TLParser::FuncCallContext *ctx) = 0;
  virtual void exitFuncCall(TLParser::FuncCallContext *ctx) = 0;

  virtual void enterIdentifier(TLParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(TLParser::IdentifierContext *ctx) = 0;

  virtual void enterMatmul(TLParser::MatmulContext *ctx) = 0;
  virtual void exitMatmul(TLParser::MatmulContext *ctx) = 0;

  virtual void enterMulOp(TLParser::MulOpContext *ctx) = 0;
  virtual void exitMulOp(TLParser::MulOpContext *ctx) = 0;

  virtual void enterLiteral(TLParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(TLParser::LiteralContext *ctx) = 0;

  virtual void enterSum(TLParser::SumContext *ctx) = 0;
  virtual void exitSum(TLParser::SumContext *ctx) = 0;

  virtual void enterParenExpr(TLParser::ParenExprContext *ctx) = 0;
  virtual void exitParenExpr(TLParser::ParenExprContext *ctx) = 0;

  virtual void enterGrad(TLParser::GradContext *ctx) = 0;
  virtual void exitGrad(TLParser::GradContext *ctx) = 0;

  virtual void enterFunctionCall(TLParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(TLParser::FunctionCallContext *ctx) = 0;

  virtual void enterFunctionDecl(TLParser::FunctionDeclContext *ctx) = 0;
  virtual void exitFunctionDecl(TLParser::FunctionDeclContext *ctx) = 0;


};

