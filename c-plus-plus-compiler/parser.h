#ifndef PARSER_H_
#define PARSER_H_

#include "logger.h"

#include <iostream>

class Parser
{
public:
    Parser(Logger &logger):logger(logger){}
    ~Parser(){}
    void parse();
private:
    Logger logger;
};

#endif /* PARSER_H_ */ 
