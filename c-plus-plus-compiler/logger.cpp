#include "logger.h"

void Logger::printLog(bool printDebugs,bool printTraces,bool printWarnings,bool printErrors) {
    if (printDebugs) {
        std::cout << "**** Debug *****" << std::endl;
        for (unsigned i = 0; i < debugs.size(); i++) {
            std::cout << "  Debug: " << debugs[i] << std::endl;
        }
    }

    if (printTraces) {
        std::cout << "**** Trace *****" << std::endl;
        for (unsigned i = 0; i < traces.size(); i++) {
            std::cout << "  Trace: " << traces[i] << std::endl;
        }
    }

    if (printWarnings) {
        std::cout << "*** Warning ****" << std::endl;
        for (unsigned i = 0; i < warnings.size(); i++) {
            std::cout << "Warning: " << warnings[i] << std::endl;
        }
    }

    if (printErrors) {
        std::cout << "**** Error ****" << std::endl;
        for (unsigned i = 0; i < errors.size(); i++) {
            std::cout << "  Error: " << errors[i] << std::endl;
        }
    }
}

void Logger::debug(DebugType debugType,std::string message) {
    std::string log;
    switch(debugType) {
        case DebugType::VARIABLE:
            log += "Variable: ";
            break;
    }
    log += message;
    debugs.push_back(log);
}

void Logger::trace(TraceType traceType,std::string message) {
    std::string log;
    switch(traceType) {
        case TraceType::CALL:
            for (unsigned i = 0; i < traceLevel; i++) {
                log += "  ";
            }
            log += "  Call: ";
            traceLevel++;
            break;
        case TraceType::RETURN:
            for (unsigned i = 0; i < traceLevel-1; i++) {
                log += "  ";
            }
            log += "Return: ";
            traceLevel--;
            break;
    }
    log += message;
    std::cout << log << std::endl;
    traces.push_back(log);
}

void Logger::warning(WarningType warningType,std::string message) {
    std::string log;
    switch(warningType) {
        case WarningType::STYLE:
            log += "Style: ";
            break;
    }
    log += message;
    warnings.push_back(log);
}

void Logger::error(ErrorType errorType,std::string message) {
    std::string log;
    switch(errorType) {
        case ErrorType::TYPE:
            log += "Type: ";
            break;
    }
    log += message;
    errors.push_back(log);
}
