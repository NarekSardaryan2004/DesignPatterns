#ifndef HANDLER_HPP
#define HANDLER_HPP

#include <string>

#include "LogLevel.hpp"

class Handler
{
public:
    void setNext(Handler* n) {
        next = n;
    }

    void handle(LogLevel level, const std::string& message) {
        if (canHandle(level)) {
            process(message);
        }
        else if (next) {
            next->handle(level, message);
        }
    }

    virtual bool canHandle(LogLevel level) = 0;
    virtual void process(const std::string& msg) = 0;

protected:
    Handler* next = nullptr;
};

#endif // HANDLER_HPP