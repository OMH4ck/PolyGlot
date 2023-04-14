grammar SimpleLang;

options {
  contextSuperClass = CustomRuleContext;
}

@parser::header {
/* parser/listener/visitor header section */
#include "custom_rule_context.h"
}

program : stmtlist {$ctx->SetScopeType(kScopeGlobal);};

stmtlist : stmt stmtlist
         | stmt ;

stmt : forstmt
     | declaration_stmt ';'
     | expr ';' ;

declaration_stmt : type assign_expr {$ctx->SetDataType(kDataVarDefine); $ctx->SetDataFlag(kDefine);}
                  | 'STRUCT' identifier assign_expr
                  | structure_declaration ;

structure_declaration : 'STRUCT' identifier '{' declaration_stmt_list '}' ;

declaration_stmt_list : declaration_stmt ';'
                       | declaration_stmt ';' declaration_stmt_list ;

type : 'INT'
     | 'FLOAT' ;

assign_expr : identifier '=' expr {$ctx->identifier()->SetDataType(kDataVarName); $ctx->identifier()->SetDataFlag(kDefine);}
            | identifier  {$ctx->identifier()->SetDataType(kDataVarName); $ctx->identifier()->SetDataFlag(kDefine);} ;

forstmt : 'FOR' '(' expr ')' '{' stmtlist '}' ;

expr : expr '+' expr
     | member_access
     | bexpr ;

member_access : identifier '.' identifier
              | identifier '.' member_access ;

bexpr : 'TEST'
      | cexpr ;

cexpr : identifier
      | float_literal
      | string_literal
      | int_literal ;

float_literal : FLOATLITERAL ;

int_literal : INTLITERAL {$ctx->isIntLiteral = true;};

string_literal : STRINGLITERAL ;

identifier : IDENTIFIER {$ctx->isStringLiteral=true; $ctx->SetDataType(kDataFixUnit); $ctx->SetDataFlag(kUse);};

IDENTIFIER : [a-zA-Z_][a-zA-Z0-9_]* ;
INTLITERAL : [0-9]+;
FLOATLITERAL : [0-9]+ '.' [0-9]+;
STRINGLITERAL : '"' .*? '"' | '\'' .*? '\'' ;

// Ignore everything below this line
WS : [ \t\r\n] -> skip ;
COMMENT : '/*' .*? '*/' -> skip ;
