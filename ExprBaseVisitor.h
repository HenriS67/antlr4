
// Generated from Expr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ExprVisitor.h"


/**
 * This class provides an empty implementation of ExprVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ExprBaseVisitor : public ExprVisitor {
public:

  virtual antlrcpp::Any visitProg(ExprParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPar(ExprParser::ParContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd(ExprParser::AddContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSub(ExprParser::SubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst(ExprParser::ConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMuldiv(ExprParser::MuldivContext *ctx) override {
    return visitChildren(ctx);
  }


};

