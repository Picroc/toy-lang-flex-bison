%{
       #include "node.h"
       CompilationUnit* root;

       extern "C" int yylex();
       extern "C" int yyparse();
       void yyerror(const char *s) { printf("ERROR: %sn", s); }
%}

%union {
       CompilationUnit* cpunit;
       ClassDeclarations* cldcls;
       ClassDeclaration* cldcl;
       Imports* imps;
       LocalDeclarations* lcdcls;
       LocalDeclaration* lcdcl;
       FieldDeclaration* fld;
       MethodDeclaration* mtd;
       Statements* stms;
       Statement* stm;
       ClassMembers* clsmbs;
       ClassMember* clsmb;
       ParameterList* plist;
       Parameter* par;
       ArgumentList* arglist;
       Expression* exp;
       CompoundNames* cpnames;
       CompoundName* cpname;
       Terms* trms;
       Term* trm;
       Factor* fctr;
       Factors* fctrs;
       MultSign* mlsn;
       AddSign* adsn;
       Extension* extns;
       Body* bd;
       Visibility* vsblt;
       Staticness* stcs;
       Type* tp;
       NewType* ntp;
       ArrayTail* arrt;
       LeftPart* lfpt;
       Block* blck;
       Relation* rlt;
       RelationalOperator* rltop;
       MethodType* mtp;
       Import* imp;

       std::string *string;
       int token;
}

%token <string> IDENTIFIER
%token <string> NUMBER

// Keywords
%token <token> IMPORT
%token <token> CLASS
%token <token> EXTENDS
%token <token> PRIVATE
%token <token> PUBLIC
%token <token> STATIC
%token <token> VOID
%token <token> IF
%token <token> ELSE
%token <token> WHILE
%token <token> LOOP
%token <token> RETURN
%token <token> PRINT
%token <token> NUL
%token <token> NEW
%token <token> INT
%token <token> REAL
// Delimiters

%token <token> LBRACE      //  {
%token <token> RBRACE      //  }
%token <token> LPAREN      //  (
%token <token> RPAREN      //  )
%token <token> LBRACKET    //  [
%token <token> RBRACKET    //  ]
%token <token> COMMA       //  ,
%token <token> DOT         //  .
%token <token> SEMICOLON   //  ;

// Operator signs
%token <token> ASSIGN      //  =
%token <token> LESS        //  <
%token <token> GREATER     //  >
%token <token> EQUAL       //  ==
%token <token> NOT_EQUAL   //  !=
%token <token> PLUS        //  +
%token <token> MINUS       //  -
%token <token> MULTIPLY    //  *
%token <token> DIVIDE      //  /

%type <cpunit> CompilationUnit
%type <imps> Imports
%type <imp> Import
%type <cldcls> ClassDeclarations
%type <cldcl> ClassDeclaration
%type <lcdcls> LocalDeclarations
%type <lcdcl> LocalDeclaration
%type <fld> FieldDeclaration
%type <mtd> MethodDeclaration
%type <stms> Statements
%type <stm> Statement Assignment IfStatement WhileStatement ReturnStatement CallStatement PrintStatement
%type <clsmbs> ClassMembers ClassBody
%type <clsmb> ClassMember
%type <plist> ParameterList Parameters
%type <par> Parameter
%type <arglist> ArgumentList
%type <exp> Expression
%type <cpnames> CompoundName
%type <trms> Terms
%type <trm> Term
%type <fctr> Factor
%type <fctrs> Factors
%type <mlsn> MultSign
%type <adsn> AddSign
%type <extns> Extension
%type <bd> Body
%type <vsblt> Visibility
%type <stcs> Staticness
%type <tp> Type
%type <ntp> NewType
%type <arrt> ArrayTail
%type <lfpt> LeftPart
%type <blck> Block
%type <rlt> Relation
%type <rltop> RelationalOperator
%type <mtp> MethodType

%start CompilationUnit

%%

CompilationUnit
       : Imports ClassDeclarations { root = new CompilationUnit(*$1, *$2); std::cout << "Processed CompUnit" << std::endl; }
       ;

Imports
       :  /* empty */   { $$ = new Imports(); }
       | Import Imports { $$ = new Imports(); $2->push_back($1); }
       ;

Import
       : IMPORT IDENTIFIER SEMICOLON { $$ = new Import(*$2); std::cout << "New Import: " << $$->identifier << std::endl; }
       ;

ClassDeclarations
       : /* empty */                        { $$ = new ClassDeclarations(); }
       | ClassDeclaration ClassDeclarations { $$ = new ClassDeclarations(); $2->push_back($1); }
       ;

ClassDeclaration
       :        CLASS CompoundName Extension SEMICOLON ClassBody {$$ = new ClassDeclaration(*$2, $3, *$5); std::cout << "New ClassDecl" << std::endl;}
       | PUBLIC CLASS CompoundName Extension SEMICOLON ClassBody {$$ = new ClassDeclaration(*$3, $4, *$6); std::cout << "New public ClassDecl" << std::endl;}
       ;

Extension
       : /* empty */ { $$ = new Extension(); }
       | EXTENDS IDENTIFIER {$$ = new Extension(*$2); std::cout << "Assigned Extension " << *$2 << std::endl;}
       ;

ClassBody
       : LBRACE              RBRACE {$$ = new ClassMembers(); std::cout << "New Empty ClassBody" << std::endl;}
       | LBRACE ClassMembers RBRACE {$$ = $2;}
       ;

ClassMembers
       :              ClassMember { $$ = new ClassMembers(); $$->push_back($1); }
       | ClassMembers ClassMember { $1->push_back($2); }
       ;

ClassMember
       : FieldDeclaration { $$ = $1; }
       | MethodDeclaration { $$ = $1; }
       ;

FieldDeclaration
       : Visibility Staticness Type IDENTIFIER SEMICOLON { $$ = new FieldDeclaration(*$4, $1, $2, $3); std::cout << "New FieldDecl with name " << *$4 << std::endl;}
       ;

Visibility
       : /* empty */ { $$ = new Visibility(); }
       | PRIVATE { $$ = new Private(); std::cout << "New Private Visibility" << std::endl;}
       | PUBLIC { $$ = new Public(); std::cout << "New Public Visibility" << std::endl; }
       ;

Staticness
       : /* empty */ { $$ = new Staticness(); }
       | STATIC      { $$ = new Static(); std::cout << "New Static" << std::endl;}
       ;

MethodDeclaration
       : Visibility Staticness MethodType IDENTIFIER Parameters
            Body { $$ = new MethodDeclaration(*$4, $1, $2, $3, *$5, $6); std::cout << "New MethodDecl with name " << *$4 << std::endl;}
       ;

Parameters
       : LPAREN               RPAREN { $$ = new ParameterList(); std::cout << "New EmptyParamList" << std::endl;}
       | LPAREN ParameterList RPAREN { $$ = $2; }
       ;

ParameterList
       :                     Parameter { $$ = new ParameterList(); $$->push_back($1); }
       | ParameterList COMMA Parameter { $1->push_back($3); }
       ;

Parameter
       : Type IDENTIFIER { $$ = new Parameter(*$2, $1); std::cout << "New Parameter " << *$2 << std::endl;}
       ;

MethodType
       : Type { $$ = new CustomMethodType($1); }
       | VOID { $$ = new VoidMethodType(); std::cout << "New VOID MethodType" << std::endl;}
       ;

Body
       : LBRACE LocalDeclarations Statements RBRACE { $$ = new Body(*$2, *$3); std::cout << "New Body" << std::endl;}
       ;

LocalDeclarations
       :                   LocalDeclaration { $$ = new LocalDeclarations(); $$->push_back($1); }
       | LocalDeclarations LocalDeclaration { $1->push_back($2); }
       ;

LocalDeclaration
       : Type IDENTIFIER SEMICOLON { $$ = new LocalDeclaration(*$2, $1); std::cout << "New LocalDecl " << *$2 << std::endl;}
       ;

Statements
       :            Statement { $$ = new Statements(); $$->push_back($1); }
       | Statements Statement { $1->push_back($2); }
       ;

Statement
       : Assignment { $$ = $1; }
       | IfStatement { $$ = $1; }
       | WhileStatement { $$ = $1; }
       | ReturnStatement { $$ = $1; }
       | CallStatement { $$ = $1; }
       | PrintStatement { $$ = $1; }
       | Block { $$ = $1; }
       ;

Assignment
       : LeftPart ASSIGN Expression SEMICOLON { $$ = new Assignment($1, $3); std::cout << "New Assignment" << std::endl;}
       ;

LeftPart
       :                              CompoundName  { $$ = new LeftPart(*$1); std::cout << "New LeftPart" << std::endl;}
       | CompoundName LBRACKET Expression RBRACKET  { $$ = new LeftPart(*$1, $3); std::cout << "New LeftPart with Expression" << std::endl;}
       ;

CompoundName
       :                  IDENTIFIER { $$ = new CompoundNames(); $$->push_back(new CompoundName(*$1)); std::cout << "New CompoundName part " << *$1 << std::endl;}
       | CompoundName DOT IDENTIFIER  { $1->push_back(new CompoundName(*$3)); std::cout << "New CompoundName part with dot " << *$3 << std::endl;}
       ;

IfStatement
       : IF LPAREN Relation RPAREN Statement { $$ = new If($3, $5); std::cout << "New IfStatement" << std::endl;}
       | IF LPAREN Relation RPAREN Statement ELSE Statement { $$ = new If($3, $5, $7); std::cout << "New IfElseStatement" << std::endl;}
       ;

WhileStatement
       : WHILE Relation LOOP Statement SEMICOLON { $$ = new While($2, $4); std::cout << "New WhileStatement" << std::endl;}
       ;

ReturnStatement
       : RETURN            SEMICOLON { $$ = new Return(); std::cout << "New emty Return" << std::endl;}
       | RETURN Expression SEMICOLON { $$ = new Return($2); std::cout << "New ReturnStatement" << std::endl;}
       ;

CallStatement
       : CompoundName LPAREN              RPAREN SEMICOLON { $$ = new Call(*$1); std::cout << "New empty call" << std::endl;}
       | CompoundName LPAREN ArgumentList RPAREN SEMICOLON { $$ = new Call(*$1, *$3); std::cout << "New CallStatement" << std::endl;}
       ;

ArgumentList
       :                    Expression { $$ = new ArgumentList(); $$->push_back($1); }
       | ArgumentList COMMA Expression { $1->push_back($3); }
       ;

PrintStatement
       : PRINT Expression SEMICOLON { $$ = new Print($2); std::cout << "New PrintStatement" << std::endl;}
       ;

Block
       : LBRACE            RBRACE  { $$ = new Block(); std::cout << "New Empty Block" << std::endl;}
       | LBRACE Statements RBRACE  { $$ = new Block(*$2); std::cout << "New Block statement" << std::endl;}
       ;

Relation
       :                               Expression { $$ = new Relation($1); std::cout << "New Relation" << std::endl;}
       | Expression RelationalOperator Expression { $$ = new Relation($1, $2, $3); std::cout << "New Relation" << std::endl;}
       ;

RelationalOperator
       : LESS { $$ = new Less(); std::cout << "New Operator LESS" << std::endl;}
       | GREATER { $$ = new Greater(); std::cout << "New Operator GREATER" << std::endl;}
       | EQUAL { $$ = new Equal(); std::cout << "New Operator EQUAL" << std::endl;}
       | NOT_EQUAL { $$ = new NotEqual(); std::cout << "New Operator NOT_EQUAL" << std::endl;}
       ;

Expression
       :         Term Terms { $$ = new Expression($1, $2); }
       | AddSign Term Terms { $$ = new Expression($2, $3, $1); }
       ;

AddSign
       : PLUS { $$ = new Plus(); std::cout << "New sign PLUS" << std::endl;}
       | MINUS { $$ = new Minus(); std::cout << "New sign MINUS" << std::endl;}
       ;

Terms
       : /* empty */ { $$ = new Terms(); }
       | AddSign Term Terms { $$ = new Terms(); TermPair* tp = new TermPair($1, $2); $3->terms.push_back(*tp); }
       ;

Term
       : Factor Factors { $$ = new Term($1, $2); }
       ;

Factors
       : /* empty */ { $$ = new Factors(); }
       | MultSign Factor Factors { $$ = new Factors(); FactorPair* fp = new FactorPair($1, $2); $3->factors.push_back(*fp); }
       ;

MultSign
       : MULTIPLY { $$ = new Multiply(); std::cout << "New sign MULTIPLY" << std::endl;}
       | DIVIDE { $$ = new Divide(); std::cout << "New sign DIVIDE" << std::endl;}
       ;

Factor
       : NUMBER { $$ = new Factor(*$1); std::cout << "New Factor NUMBER " << *$1 << std::endl;}
       | LeftPart { $$ = new Factor($1); }
       | NUL { $$ = new Factor(); std::cout << "New Factor NULL" << std::endl;}
       | NEW NewType { $$ = new Factor($2); }
       | NEW NewType LBRACKET Expression RBRACKET { $$ = new Factor($2, $4); }
       ;

NewType
       : INT { $$ = new NewInt(); std::cout << "New NewType INT" << std::endl;}
       | REAL { $$ = new NewReal(); std::cout << "New NewType REAL" << std::endl;}
       | IDENTIFIER { $$ = new NewCustom(*$1); std::cout << "New custom NewType " << *$1 << std::endl;}
       ;

Type
       : INT        ArrayTail { $$ = new Int(); std::cout << "New Type INT" << std::endl;}
       | REAL       ArrayTail { $$ = new Real(); std::cout << "New Type INT" << std::endl;}
       | IDENTIFIER ArrayTail { $$ = new Custom(*$1); std::cout << "New custom Type " << *$1 << std::endl;}
       ;

ArrayTail
       : /* empty */ { $$ = new ArrayTail(); }
       | LBRACKET RBRACKET { $$ = new ArrayTail(); std::cout << "New ArrayTail" << std::endl;}
       ;

%%

int main(int argc, char **argv)
{
    yyparse();
    std::cout << root << std::endl;
    return 0;
}