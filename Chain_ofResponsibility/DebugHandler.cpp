#include <iostream>
#include "Handler.hpp"

class DebugHandler : public Handler
{
public:
    bool canHandle(LogLevel level) override {
        return level == LogLevel::DEBUG || level == LogLevel::INFO;
    }

    void process(const std::string& msg) override {
        std::cout << "[DEBUG/INFO HANDLER] " << msg << "\n";
    }
};