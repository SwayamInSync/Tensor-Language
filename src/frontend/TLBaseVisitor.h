
// Generated from TL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "TLVisitor.h"


/**
 * This class provides an empty implementation of TLVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  TLBaseVisitor : public TLVisitor {
public:

  virtual std::any visitProgram(TLParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(TLParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTensorDecl(TLParser::TensorDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(TLParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTensorLiteral(TLParser::TensorLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitScalarLiteral(TLParser::ScalarLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForLoop(TLParser::ForLoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddOp(TLParser::AddOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncCall(TLParser::FuncCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifier(TLParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMatmul(TLParser::MatmulContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulOp(TLParser::MulOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral(TLParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSum(TLParser::SumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenExpr(TLParser::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrad(TLParser::GradContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCall(TLParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDecl(TLParser::FunctionDeclContext *ctx) override {
    return visitChildren(ctx);
  }


};

