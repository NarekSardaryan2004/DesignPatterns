#include <iostream>
#include "Handler.hpp"

class CriticalHandler : public Handler
{
public:
    bool canHandle(LogLevel level) override {
        return level == LogLevel::CRITICAL;
    }

    void process(const std::string& msg) override {
        std::cout << "[CRITICAL HANDLER] " << msg << "\n";
    }
};