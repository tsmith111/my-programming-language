#ifndef LEXER_H_
#define LEXER_H_

#include "logger.h"

#include <iostream>

class Lexer
{
public:
    Lexer(Logger &logger):logger(logger){}
    ~Lexer(){}
    void lex();
private:
    Logger logger;
};

#endif /* LEXER_H_ */