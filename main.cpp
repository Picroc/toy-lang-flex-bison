#include <iostream>
#include "node.h"
extern CompilationUnit* root;
extern int yyparse();

int main(int argc, char **argv)
{
    yyparse();
    std::cout << root << std::endl;
    return 0;
}