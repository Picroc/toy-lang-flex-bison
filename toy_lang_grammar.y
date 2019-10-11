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
       : Imports ClassDeclarations { root = new CompilationUnit(*$1, *$2); }
       ;

Imports
       :  /* empty */   { $$ = new Imports(); }
       | Import Imports { $2->push_back($1); }
       ;

Import
       : IMPORT IDENTIFIER SEMICOLON { $$ = new Import(*$2); }
       ;

ClassDeclarations
       : /* empty */                        { $$ = new ClassDeclarations(); }
       | ClassDeclaration ClassDeclarations { $2->push_back($1); }
       ;

ClassDeclaration
       :        CLASS CompoundName Extension SEMICOLON ClassBody {$$ = new ClassDeclaration(*$2, $3, *$5);}
       | PUBLIC CLASS CompoundName Extension SEMICOLON ClassBody {$$ = new ClassDeclaration(*$3, $4, *$6);}
       ;

Extension
       : /* empty */ { $$ = new Extension(); }
       | EXTENDS IDENTIFIER {$$ = new Extension(*$2);}
       ;

ClassBody
       : LBRACE              RBRACE {$$ = new ClassMembers();}
       | LBRACE ClassMembers RBRACE {$$ = $2;}
       ;

ClassMembers
       :              ClassMember { $$ = new ClassMembers(); $$->push_back($1) }
       | ClassMembers ClassMember { $1->push_back($2); }
       ;

ClassMember
       : FieldDeclaration { $$ = $1; }
       | MethodDeclaration { $$ = $1; }
       ;

FieldDeclaration
       : Visibility Staticness Type IDENTIFIER SEMICOLON { $$ = new FieldDeclaration(*$4, $1, $2, $3); }
       ;

Visibility
       : /* empty */ { $$ = new Visibility(); }
       | PRIVATE { $$ = new Private(); }
       | PUBLIC { $$ = new Public(); }
       ;

Staticness
       : /* empty */ { $$ = new Staticness(); }
       | STATIC      { $$ = new Static(); }
       ;

MethodDeclaration
       : Visibility Staticness MethodType IDENTIFIER Parameters
            Body { $$ = new MethodDeclaration(*$4, $1, $2, $3, *$5, $6); }
       ;

Parameters
       : LPAREN               RPAREN { $$ = new ParameterList(); }
       | LPAREN ParameterList RPAREN { $$ = $2; }
       ;

ParameterList
       :                     Parameter { $$ = new ParameterList(); $$->push_back($1); }
       | ParameterList COMMA Parameter { $1->push_back($3); }
       ;

Parameter
       : Type IDENTIFIER { $$ = new Parameter(*$2, $1); }
       ;

MethodType
       : Type { $$ = new CustomMethodType($1); }
       | VOID { $$ = new VoidMethodType(); }
       ;

Body
       : LBRACE LocalDeclarations Statements RBRACE { $$ = new Body(*$2, *$3); }
       ;

LocalDeclarations
       :                   LocalDeclaration { $$ = new LocalDeclarations(); $$->push_back($1); }
       | LocalDeclarations LocalDeclaration { $1->push_back($2); }
       ;

LocalDeclaration
       : Type IDENTIFIER SEMICOLON { $$ = new LocalDeclaration(*$2, $1); }
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
       : LeftPart ASSIGN Expression SEMICOLON { $$ = new Assignment($1, $3); }
       ;

LeftPart
       :                              CompoundName  { $$ = new LeftPart(*$1); }
       | CompoundName LBRACKET Expression RBRACKET  { $$ = new LeftPart(*$1, $3); }
       ;

CompoundName
       :                  IDENTIFIER { $$ = new CompoundNames(); $$->push_back(new CompoundName(*$1)); }
       | CompoundName DOT IDENTIFIER  { $1->push_back(new CompoundName(*$3)); }
       ;

IfStatement
       : IF LPAREN Relation RPAREN Statement { $$ = new If($3, $5); }
       | IF LPAREN Relation RPAREN Statement ELSE Statement { $$ = new If($3, $5, $7); }
       ;

WhileStatement
       : WHILE Relation LOOP Statement SEMICOLON { $$ = new While($2, $4); }
       ;

ReturnStatement
       : RETURN            SEMICOLON { $$ = new Return(); }
       | RETURN Expression SEMICOLON { $$ = new Return($2); }
       ;

CallStatement
       : CompoundName LPAREN              RPAREN SEMICOLON { $$ = new Call(*$1); }
       | CompoundName LPAREN ArgumentList RPAREN SEMICOLON { $$ = new Call(*$1, *$3); }
       ;

ArgumentList
       :                    Expression { $$ = new ArgumentList(); $$->push_back($1); }
       | ArgumentList COMMA Expression { $1->push_back($3); }
       ;

PrintStatement
       : PRINT Expression SEMICOLON { $$ = new Print($2); }
       ;

Block
       : LBRACE            RBRACE  { $$ = new Block(); }
       | LBRACE Statements RBRACE  { $$ = new Block(*$2); }
       ;

Relation
       :                               Expression { $$ = new Relation($1); }
       | Expression RelationalOperator Expression { $$ = new Relation($1, $2, $3); }
       ;

RelationalOperator
       : LESS { $$ = new Less(); }
       | GREATER { $$ = new Greater(); }
       | EQUAL { $$ = new Equal(); }
       | NOT_EQUAL { $$ = new NotEqual(); }
       ;

Expression
       :         Term Terms { $$ = new Expression($1, $2); }
       | AddSign Term Terms { $$ = new Expression($2, $3, $1); }
       ;

AddSign
       : PLUS { $$ = new Plus(); }
       | MINUS { $$ = new Minus(); }
       ;

Terms
       : /* empty */ { $$ = new Terms(); }
       | AddSign Term Terms { TermPair* tp = new TermPair($1, $2); $3->terms.push_back(*tp); }
       ;

Term
       : Factor Factors { $$ = new Term($1, $2); }
       ;

Factors
       : /* empty */ { $$ = new Factors(); }
       | MultSign Factor Factors { FactorPair* fp = new FactorPair($1, $2); $3->factors.push_back(*fp); }
       ;

MultSign
       : MULTIPLY { $$ = new Multiply(); }
       | DIVIDE { $$ = new Divide(); }
       ;

Factor
       : NUMBER { $$ = new Factor(*$1); }
       | LeftPart { $$ = new Factor($1); }
       | NUL { $$ = new Factor(); }
       | NEW NewType { $$ = new Factor($2); }
       | NEW NewType LBRACKET Expression RBRACKET { $$ = new Factor($2, $4); }
       ;

NewType
       : INT { $$ = new NewInt(); }
       | REAL { $$ = new NewReal(); }
       | IDENTIFIER { $$ = new NewCustom(*$1); }
       ;

Type
       : INT        ArrayTail { $$ = new Int(); }
       | REAL       ArrayTail { $$ = new Real(); }
       | IDENTIFIER ArrayTail { $$ = new Custom(*$1); }
       ;

ArrayTail
       : /* empty */ { $$ = new ArrayTail(); }
       | LBRACKET RBRACKET { $$ = new ArrayTail(); }
       ;

%%