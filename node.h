#include <iostream>
#include <vector>
#include <string>

typedef std::vector<Import*> Imports;
typedef std::vector<ClassDeclaration*> ClassDeclarations;
typedef std::vector<LocalDeclaration*> LocalDeclarations;
typedef std::vector<Statement*> Statements;
typedef std::vector<ClassMember*> ClassMembers;
typedef std::vector<Parameter*> ParameterList;
typedef std::vector<Expression*> ArgumentList;
typedef std::vector<std::pair<AddSign*, Term*>> TermsVec;
typedef std::vector<std::pair<MultSign*, Factor*>> FactorsVec;

class CompilationUnit {
public:
    virtual ~CompilationUnit() {};

    Imports imports;
    ClassDeclarations class_declaration;
};

class Expression : public CompilationUnit {
public:
    Term* term;
    Terms* terms;
    AddSign* sign;
    Expression(Term* term, Terms* terms) : term(term), terms(terms) {};
    Expression(Term* term, Terms* terms, AddSign* sign) : term(term), terms(terms), sign(sign) {};
};

class Terms {
public:
    Term* term;
    AddSign* sign;
    TermsVec terms;
    Terms(Term* term, TermsVec terms, AddSign* sign) :
        term(term), terms(terms), sign(sign) {};
};

class Term {
public:
    Factor* factor;
    Factors* factors;
    Term(Factor* factor, Factors* factors) :
        factor(factor), factors(factors) {};
};

class Factor {
public:
    std::string value;
    LeftPart* l_part;
    NewType* type;
    Expression* exp;
    Factor();
    Factor(LeftPart* l_part) : l_part(l_part) {};
    Factor(NewType* type) : type(type) {};
    Factor(NewType* type, Expression* exp) : exp(exp) {};
};

class Factors {
public:
    MultSign* sign;
    Factor* factor;
    FactorsVec factors;
    Factors();
    Factors(Factor* factor, FactorsVec factors, MultSign* sign) :
        factor(factor), factors(factors), sign(sign) {};
};

class MultSign {};
class Multiply : public MultSign {};
class Divide : public MultSign {};

class AddSign {};
class Plus : public AddSign {};
class Minus : public AddSign {};

class Identifier {
public:
    std::string name;
    Identifier(std::string name) : name(name) {};
};

class Import {
public:
    Identifier* identifier;
    Import(Identifier* id) : identifier(id) {};
};

class ClassDeclaration {
public:
    CompoundName* name;
    Extension* extension;
    ClassMembers body;
    ClassDeclaration(CompoundName* name, Extension* extension, ClassMembers body) : 
        name(name), extension(extension), body(body) {}; 
};

class Extension {
public:
    Identifier* id;
    Extension(Identifier* id) : id(id) {};
};

class Body {
public:
    LocalDeclarations declarations;
    Statements statements;
    Body(LocalDeclarations declarations, Statements statements) :
        declarations(declarations), statements(statements) {};
};

class ClassMember {};
class FieldDeclaration : public ClassMember {
public:
    Identifier* id;
    Visibility* visibility;
    Staticness* staticness;
    Type* type;
    FieldDeclaration(Identifier* id, Visibility* visibility, Staticness* staticness, Type* type) :
        id(id), visibility(visibility), staticness(staticness), type(type) {};
};
class MethodDeclaration : public ClassMember {
public:
    Identifier* id;
    Visibility* visibility;
    Staticness* staticness;
    MethodType* m_type;
    Parameters* parameters;
    MethodDeclaration(Identifier* id, Visibility* visibility, Staticness* staticness, MethodType* m_type, Parameters* parameters) :
        id(id), visibility(visibility), staticness(staticness), m_type(m_type), parameters(parameters) {};
};

class Parameters {
public:
    ParameterList* p_list;
    Parameters(ParameterList* p_list) : p_list(p_list) {};
};

class Parameter {
public:
    Identifier* id;
    Type* type;
    Parameter(Identifier* id, Type* type) : id(id), type(type) {};
};

class MethodType {};
class CustomMethodType : public MethodType {
public:
    Type* type;
    CustomMethodType(Type* type) :
        type(type) {};
};
class VoidMethodType : public MethodType {
    Type* type;
    VoidMethodType() : type(new Void()) {};
};

class Visibility {};
class Private : public Visibility {};
class Public : public Visibility {};

class Staticness {};
class Static : public Staticness {};
class StaticnessEmpty : public Staticness {};

class LocalDeclaration {
public:
    Identifier* id;
    Type* type;
    LocalDeclaration(Identifier* id, Type* type) :
        id(id), type(type) {};
};

class Type {
public:
    ArrayTail* arr_tail;
    Type();
    Type(ArrayTail* arr_tail) : arr_tail(arr_tail) {};
};
class Int : public Type {};
class Real : public Type {};
class Void : public Type {};
class Custom : public Type {
public:
    Identifier* type;
    Custom(Identifier* type) : type(type) {};
};

class ArrayTail {};

class NewType {};
class NewInt : public NewType {};
class NewReal : public NewType {};
class NewCustom : public NewType {
public:
    Identifier* type;
    NewCustom(Identifier* type) : type(type) {};
};

class Statement : public CompilationUnit {};
class Assignment : public Statement {
public:
    LeftPart* left_part;
    Expression* exp;
    Assignment(LeftPart* left_part, Expression* exp) :
        left_part(left_part), exp(exp) {};
};

class LeftPart {
public:
    CompoundName* name;
    Expression* exp;
    LeftPart(CompoundName* name) : name(name) {};
    LeftPart(CompoundName* name, Expression* exp) :
        name(name), exp(exp) {};
};

class CompoundName {
public:
    Identifier* id;
    CompoundName(Identifier* id) : id(id) {};
};

class If : public Statement {
public:
    Relation* rel;
    Statement* l_statement;
    Statement* r_statement;
    If(Relation* rel, Statement* l_statement, Statement* r_statement) :
        rel(rel), l_statement(l_statement), r_statement(r_statement) {};
};

class While : public Statement {
public:
    Relation* rel;
    Statement* statement;
    While(Relation* rel, Statement* statement) :
        rel(rel), statement(statement) {};
};

class Return : public Statement {
public:
    Expression* exp;
    Return(Expression* exp) : exp(exp) {};
};

class Call : public Statement {
public:
    CompoundName* name;
    ArgumentList arguments;
    Call(CompoundName* name) : name(name) {};
    Call(CompoundName* name, ArgumentList arguments) :
        name(name), arguments(arguments) {};
};

class Print : public Statement {
public:
    Expression* exp;
    Print(Expression* exp) : exp(exp) {};
};

class Block {
public:
    Statements statements;
    Block();
    Block(Statements statements) : statements(statements) {};
};

class Relation {
public:
    Expression* l_expression;
    RelationalOperator* op;
    Expression* r_expression;
    Relation(Expression* l_expression) : l_expression(l_expression) {};
    Relation(Expression* l_expression, RelationalOperator* op, Expression* r_expression) :
        l_expression(l_expression), op(op), r_expression(r_expression) {};
};

class RelationalOperator {};
class Less : public RelationalOperator {};
class Greater : public RelationalOperator {};
class Equal : public RelationalOperator {};
class NotEqual : public RelationalOperator {};


