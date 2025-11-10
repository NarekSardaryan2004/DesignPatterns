#include "MessageDecorator.hpp"

#include <algorithm>

class EncryptedMessage : public MessageDecorator
{
public:
    explicit EncryptedMessage(Message* msg) : MessageDecorator(msg) {}

    std::string getText() const override
    {
        std::string encrypted = p_message->getText();
        std::reverse(encrypted.begin(), encrypted.end());

        return "[Encrypted] " + encrypted;
    }
};