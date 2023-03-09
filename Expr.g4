grammar Expr;

prog : expr ;

expr : expr OP expr  # muldiv
     | expr '+' expr # add
     | expr '-' expr # sub
     | INT           # const
     | '(' expr ')'  # par
     ;

INT : [0-9]+ ;
OP : ('*'|'/');