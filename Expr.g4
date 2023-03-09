grammar Expr;

prog : expr ;

expr : expr '*' expr # mul
     | expr '/' expr # div   
     | expr '+' expr # add
     | expr '-' expr # sub
     | INT           # const
     | '(' expr ')'  # par
     ;

INT : [0-9]+ ;