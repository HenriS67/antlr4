#include <iostream>
#include "antlr4-runtime.h"
using namespace std;
using namespace antlr4;
#include "ExprLexer.h"
#include "ExprParser.h"
#include "MyVisitor.h"
int main(void){
    ANTLRInputStream input("3/3*3");
    ExprLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    ExprParser parser(&tokens);
    tree::ParseTree * tree = parser.prog();
    Calc calc;
    int result = (int) calc.visit(tree);
    cout<<"Resultat "<<result<<endl;
    return 0;
}