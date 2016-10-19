#ifndef LINKER_H_
#define LINKER_H_

#include "logger.h"

#include <iostream>

class Linker
{
public:
    Linker(Logger &logger):logger(logger){}
    ~Linker(){}
    void link();
private:
    Logger logger;
};

#endif /* LINKER_H_ */ 
