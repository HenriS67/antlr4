
// Generated from Expr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ExprVisitor.h"


/**
 * This class provides an empty implementation of ExprVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  Calc : public ExprVisitor {
public:

  virtual antlrcpp::Any visitProg(ExprParser::ProgContext *ctx) override {
    return (int) visit(ctx->expr());
  }

  virtual antlrcpp::Any visitPar(ExprParser::ParContext *ctx) override {
    return (int) visit(ctx->expr());
  }

  virtual antlrcpp::Any visitMuldiv(ExprParser::MuldivContext *ctx) override {
    char op=ctx->OP()->getText()[0];
    int r1 = (int) visit(ctx->expr(0));
    int r2 = (int) visit(ctx->expr(1));
    if(op=='*')
      return r1*r2;
    else
      return r1/r2;
  }

  virtual antlrcpp::Any visitAdd(ExprParser::AddContext *ctx) override {
    return (int) visit(ctx->expr(0)) + (int) visit(ctx->expr(1));
  }

  virtual antlrcpp::Any visitSub(ExprParser::SubContext *ctx) override {
    return (int) visit(ctx->expr(0)) - (int) visit(ctx->expr(1));
  }

  virtual antlrcpp::Any visitConst(ExprParser::ConstContext *ctx) override {
    return (int) stoi(ctx->INT()->getText());
  }


};

