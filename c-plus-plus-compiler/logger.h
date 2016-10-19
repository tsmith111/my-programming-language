#ifndef LOGGER_H_
#define LOGGER_H_

#include <iostream>
#include <vector>

enum class DebugType {VARIABLE};
enum class TraceType {CALL,RETURN};
enum class WarningType {STYLE};
enum class ErrorType {TYPE};

class Logger
{
public:
    Logger(){}
    ~Logger(){}
    
    void printLog(bool printDebugs,bool printTraces,bool printWarnings,bool printErrors);
    void debug(DebugType debugType,std::string message);
    void trace(TraceType traceType,std::string message);
    void warning(WarningType warningType,std::string message);
    void error(ErrorType errorType,std::string message);
    
private:
    unsigned traceLevel = 0;
    std::vector<std::string> debugs;
    std::vector<std::string> traces;
    std::vector<std::string> warnings;
    std::vector<std::string> errors;
};

#endif /* LOGGER_H_ */
