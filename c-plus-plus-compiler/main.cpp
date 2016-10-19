#include "linker.h"
#include "lexer.h"
#include "parser.h"
#include "compiler.h"
#include "logger.h"

#include <iostream>

int main(int argc, char *argv[])
{
    Logger logger;
    const bool printDebugs = true;
    const bool printTraces = true;
    const bool printWarnings = true;
    const bool printErrors = true;

    Linker linker(logger);
    Lexer lexer(logger);
    Parser parser(logger);
    Compiler compiler(logger);

    linker.link();
    lexer.lex();
    parser.parse();
    compiler.compile();

    logger.printLog(printDebugs,printTraces,printWarnings,printErrors);

    return 0;
}
