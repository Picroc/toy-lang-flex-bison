%{
    #include <iostream>
    extern int yylex();
%}

%option noyywrap

%%
import { std::cout << "IMPORT" << yytext << std::endl; }
class { std::cout << "CLASS" << yytext << std::endl; }
extends { std::cout << "EXTENDS" << yytext << std::endl; }
private { std::cout << "PRIVATE" << yytext << std::endl; }
public { std::cout << "PUBLIC" << yytext << std::endl; }
static { std::cout << "STATIC" << yytext << std::endl; }
void { std::cout << "VOID" << yytext << std::endl; }
if { std::cout << "IF" << yytext << std::endl; }
else { std::cout << "ELSE" << yytext << std::endl; }
while { std::cout << "WHILE" << yytext << std::endl; }
loop { std::cout << "LOOP" << yytext << std::endl; }
return { std::cout << "RETURN" << yytext << std::endl; }
print { std::cout << "PRINT" << yytext << std::endl; }
null { std::cout << "NULL" << yytext << std::endl; }
new { std::cout << "NEW" << yytext << std::endl; }
int { std::cout << "INT" << yytext << std::endl; }
real { std::cout << "REAL" << yytext << std::endl; }
\{ { std::cout << "LBRACE" << yytext << std::endl; }
\} { std::cout << "RBRACE" << yytext << std::endl; }
\( { std::cout << "LPAREN" << yytext << std::endl; }
\) { std::cout << "RPAREN" << yytext << std::endl; }
\[ { std::cout << "LBRACKET" << yytext << std::endl; }
\] { std::cout << "RBRACKET" << yytext << std::endl; }
\, { std::cout << "COMMA" << yytext << std::endl; }
\. { std::cout << "DOT" << yytext << std::endl; }
\; { std::cout << "SEMICOLON" << yytext << std::endl; }
\= { std::cout << "ASSIGN" << yytext << std::endl; }
\< { std::cout << "LESS" << yytext << std::endl; }
\> { std::cout << "GREATER" << yytext << std::endl; }
\=\= { std::cout << "EQUAL" << yytext << std::endl; }
\!\= { std::cout << "NOT_EQUAL" << yytext << std::endl; }
\+ { std::cout << "PLUS" << yytext << std::endl; }
\- { std::cout << "MINUS" << yytext << std::endl; }
\* { std::cout << "MULTIPLY" << yytext << std::endl; }
\/ { std::cout << "DIVIDE" << yytext << std::endl; }
["][0-9A-Za-z#$%=@!{},`~&*()<>?.:;_|^\/+\t\r\n\s\[\]'-]*["] { std::cout << "STRING" << yytext << std::endl; }
[0-9]+([.][0-9]+)?([+|-]?[0-9]+)?([+|-][0-9]*)? { std::cout << "NUMBER" << yytext << std::endl; }
%%