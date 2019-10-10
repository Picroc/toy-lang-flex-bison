%{
    #include <iostream>
    #include <string>
    #include "node.h"
    #include "parser.hpp"
    #define SAVE_TOKEN yylval.string = new std::string(yytext, yyleng)
    #define TOKEN(t) (yyval.token = t)
    extern int yylex();
%}

%option noyywrap

%%

import      return TOKEN(IMPORT);
class       return TOKEN(CLASS);
extends     return TOKEN(EXTENDS);
private     return TOKEN(PRIVATE);
public      return TOKEN(PUBLIC);
static      return TOKEN(STATIC);
void        return TOKEN(VOID);
if          return TOKEN(IF);
else        return TOKEN(ELSE);
while       return TOKEN(WHILE);
loop        return TOKEN(LOOP);
return      return TOKEN(RETURN);
print       return TOKEN(PRINT);
null        return TOKEN(NULL);
new         return TOKEN(NEW);
int         return TOKEN(INT);
real        return TOKEN(REAL);
\{          return TOKEN(LBRACE);
\}          return TOKEN(RBRACE);
\(          return TOKEN(LPAREN);
\)          return TOKEN(RPAREN);
\[          return TOKEN(LBRACKET);
\]          return TOKEN(RBRACKET);
\,          return TOKEN(COMMA);
\.          return TOKEN(DOT);
\;          return TOKEN(SEMICOLON);
\=          return TOKEN(ASSIGN);
\<          return TOKEN(LESS);
\>          return TOKEN(GREATER);
\=\=        return TOKEN(EQUAL);
\!\=        return TOKEN(NOT_EQUAL);
\+          return TOKEN(PLUS);
\-          return TOKEN(MINUS);
\*          return TOKEN(MULTIPLY);
\/          return TOKEN(DIVIDE);
["][0-9A-Za-z#$%=@!{},`~&*()<>?.:;_|^\/+\t\r\n\s\[\]'-]*["] SAVE_TOKEN; return STRING;
[0-9]+ SAVE_TOKEN; return NUMBER;
[a-zA-Z]+[_]?[a-zA-Z0-9]* SAVE_TOKEN; return IDENTIFIER;
%%