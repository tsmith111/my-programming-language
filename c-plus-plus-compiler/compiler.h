#ifndef COMPILER_H_
#define COMPILER_H_

#include "logger.h"

#include <iostream>

class Compiler
{
public:
    Compiler(Logger &logger):logger(logger){}
    ~Compiler(){}
    void compile();
private:
    Logger logger;
};

#endif /* COMPILER_H_ */ 
