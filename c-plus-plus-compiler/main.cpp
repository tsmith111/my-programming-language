#include "lexer.h"
#include "parser.h"
#include "compiler.h"

#include <iostream>

int main(int argc, char *argv[])
{
    Lexer lexer;
    Parser parser;
    Compiler compiler;
    lexer.lex();
    parser.parse();
    compiler.compile();
    return 0;
}
