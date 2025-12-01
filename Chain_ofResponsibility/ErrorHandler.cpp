#include <iostream>
#include "Handler.hpp"

class ErrorHandler : public Handler
{
public:
    bool canHandle(LogLevel level) override {
        return level == LogLevel::ERROR;
    }

    void process(const std::string& msg) override {
        std::cout << "[ERROR HANDLER] " << msg << "\n";
    }
};