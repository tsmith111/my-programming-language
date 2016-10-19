#include "lexer.h"

void test(Logger &logger) {
    const std::string functionName = "test";
    logger.trace(TraceType::CALL,functionName);
    logger.trace(TraceType::RETURN,functionName);
    return;
}

void Lexer::lex() {
    const std::string functionName = "Lexer::lex";
    logger.trace(TraceType::CALL,functionName);
    test(logger);
    logger.trace(TraceType::RETURN,functionName);
    return;
}
