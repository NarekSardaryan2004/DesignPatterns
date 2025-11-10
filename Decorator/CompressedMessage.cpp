#include "MessageDecorator.hpp"

class CompressedMessage : public MessageDecorator
{
public:
    explicit CompressedMessage(Message* msg) : MessageDecorator(msg) {}

    std::string getText() const override
    {
        std::string original = p_message->getText();
        std::string compressed;

        for (size_t i = 0; i < original.size(); ++i) {
            if (i % 2 == 0) {
                compressed += original[i];
            }
        }

        return "[Compressed] " + compressed;
    }
};