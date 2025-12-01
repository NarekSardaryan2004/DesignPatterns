#include "DebugHandler.cpp"
#include "ErrorHandler.cpp"
#include "CriticalHandler.cpp"

int main()
{
    Handler* debug = new DebugHandler();
    Handler* error = new ErrorHandler();
    Handler* critical = new CriticalHandler();

    debug->setNext(error);
    error->setNext(critical);

    debug->handle(LogLevel::INFO, "Program started");
    debug->handle(LogLevel::ERROR, "Something went wrong!");
    debug->handle(LogLevel::CRITICAL, "System failure!");

    delete debug;
    delete error;
    delete critical;
}