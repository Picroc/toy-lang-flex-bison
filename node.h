#include <iostream>
#include <vector>
#include <string>

class Import;
class ClassDeclaration;
class LocalDeclaration;
class Statement;
class ClassMember;
class Parameter;
class Expression;
class AddSign;
class MultSign;
class Term;
class Factor;
class CompoundName;

class Terms;
class Factors;
class LeftPart;
class NewType;
class Extension;
class Visibility;
class Staticness;
class Type;
class MethodType;
class Parameters;
class Void;
class ArrayTail;
class Relation;
class RelationalOperator;


typedef std::vector<Import*> Imports;
typedef std::vector<ClassDeclaration*> ClassDeclarations;
typedef std::vector<LocalDeclaration*> LocalDeclarations;
typedef std::vector<Statement*> Statements;
typedef std::vector<ClassMember*> ClassMembers;
typedef std::vector<Parameter*> ParameterList;
typedef std::vector<Expression*> ArgumentList;
typedef std::pair<AddSign*, Term*> TermPair;
typedef std::pair<MultSign*, Factor*> FactorPair;
typedef std::vector<TermPair> TermsVec;
typedef std::vector<FactorPair> FactorsVec;
typedef std::vector<CompoundName*> CompoundNames;

class CompilationUnit {
public:
    CompilationUnit() {};

    Imports imports;
    ClassDeclarations class_declaration;
    CompilationUnit(Imports imports, ClassDeclarations class_declaration) :
        imports(imports), class_declaration(class_declaration) {};
};

class Expression {
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
    Terms() {};
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
    Factor() {};
    Factor(std::string value) : value(value) {};
    Factor(LeftPart* l_part) : l_part(l_part) {};
    Factor(NewType* type) : type(type) {};
    Factor(NewType* type, Expression* exp) : exp(exp) {};
};

class Factors {
public:
    MultSign* sign;
    Factor* factor;
    FactorsVec factors;
    Factors() {};
    Factors(Factor* factor, FactorsVec factors, MultSign* sign) :
        factor(factor), factors(factors), sign(sign) {};
};

class MultSign {};
class Multiply : public MultSign {};
class Divide : public MultSign {};

class AddSign {};
class Plus : public AddSign {};
class Minus : public AddSign {};

class Import {
public:
    std::string identifier;
    Import(std::string id) : identifier(id) {};
};

class ClassDeclaration {
public:
    CompoundNames name;
    Extension* extension;
    ClassMembers body;
    ClassDeclaration(CompoundNames name, Extension* extension, ClassMembers body) : 
        name(name), extension(extension), body(body) {}; 
};

class Extension {
public:
    std::string id;
    Extension() {};
    Extension(std::string id) : id(id) {};
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
    std::string id;
    Visibility* visibility;
    Staticness* staticness;
    Type* type;
    FieldDeclaration(std::string id, Visibility* visibility, Staticness* staticness, Type* type) :
        id(id), visibility(visibility), staticness(staticness), type(type) {};
};
class MethodDeclaration : public ClassMember {
public:
    std::string id;
    Visibility* visibility;
    Staticness* staticness;
    MethodType* m_type;
    ParameterList parameters;
    Body* body;
    MethodDeclaration(std::string id, Visibility* visibility, Staticness* staticness, MethodType* m_type, ParameterList parameters, Body* body) :
        id(id), visibility(visibility), staticness(staticness), m_type(m_type), parameters(parameters), body(body) {};
};

// class Parameters {
// public:
//     ParameterList* p_list;
//     Parameters(ParameterList* p_list) : p_list(p_list) {};
// };

class Parameter {
public:
    std::string id;
    Type* type;
    Parameter(std::string id, Type* type) : id(id), type(type) {};
};

class Visibility {};
class Private : public Visibility {};
class Public : public Visibility {};

class Staticness {};
class Static : public Staticness {};

class LocalDeclaration {
public:
    std::string id;
    Type* type;
    LocalDeclaration(std::string id, Type* type) :
        id(id), type(type) {};
};

class Type {
public:
    ArrayTail* arr_tail;
    Type() {};
    Type(ArrayTail* arr_tail) : arr_tail(arr_tail) {};
};
class Int : public Type {};
class Real : public Type {};
class Void : public Type {};
class Custom : public Type {
public:
    std::string type;
    Custom(std::string type) : type(type) {};
};

class ArrayTail {};

class NewType {};
class NewInt : public NewType {};
class NewReal : public NewType {};
class NewCustom : public NewType {
public:
    std::string type;
    NewCustom(std::string type) : type(type) {};
};

class Statement {};
class Assignment : public Statement {
public:
    LeftPart* left_part;
    Expression* exp;
    Assignment(LeftPart* left_part, Expression* exp) :
        left_part(left_part), exp(exp) {};
};

class LeftPart {
public:
    CompoundNames name;
    Expression* exp;
    LeftPart(CompoundNames name) : name(name) {};
    LeftPart(CompoundNames name, Expression* exp) :
        name(name), exp(exp) {};
};

class CompoundName {
public:
    std::string id;
    CompoundName(std::string id) : id(id) {};
};

class If : public Statement {
public:
    Relation* rel;
    Statement* l_statement;
    Statement* r_statement;
    If(Relation* rel, Statement* l_statement) :
        rel(rel), l_statement(l_statement) {};
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
    Return() {};
    Return(Expression* exp) : exp(exp) {};
};

class Call : public Statement {
public:
    CompoundNames name;
    ArgumentList arguments;
    Call(CompoundNames name) : name(name) {};
    Call(CompoundNames name, ArgumentList arguments) :
        name(name), arguments(arguments) {};
};

class Print : public Statement {
public:
    Expression* exp;
    Print(Expression* exp) : exp(exp) {};
};

class Block : public Statement {
public:
    Statements statements;
    Block() {};
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

class MethodType {};
class CustomMethodType : public MethodType {
public:
    Type* type;
    CustomMethodType(Type* type) :
        type(type) {};
};
class VoidMethodType : public MethodType {
public:
    Type* type;
    VoidMethodType() : type(new Void()) {};
};


