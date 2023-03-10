
// Generated from Expr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ExprParser.
 */
class  ExprVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ExprParser.
   */
    virtual antlrcpp::Any visitProg(ExprParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitPar(ExprParser::ParContext *context) = 0;

    virtual antlrcpp::Any visitAdd(ExprParser::AddContext *context) = 0;

    virtual antlrcpp::Any visitSub(ExprParser::SubContext *context) = 0;

    virtual antlrcpp::Any visitConst(ExprParser::ConstContext *context) = 0;

    virtual antlrcpp::Any visitMuldiv(ExprParser::MuldivContext *context) = 0;


};

