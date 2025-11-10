#include "Message.hpp"

class SimpleMessage : public Message
{
public:
    explicit SimpleMessage(const std::string& msg) : text(msg) {}

    std::string getText() const override
    {
        return text;
    }
private:
    std::string text;
};