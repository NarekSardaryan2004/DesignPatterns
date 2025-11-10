#ifndef MESSAGEDECORATOR_HPP
#define MESSAGEDECORATOR_HPP

#include "Message.hpp"

class MessageDecorator : public Message
{
public:
    explicit MessageDecorator(Message* msg) : p_message(msg) {}
    virtual ~MessageDecorator()
    {
        delete p_message;
    }

    std::string getText() const override
    {
        return p_message->getText();
    }
protected:
    Message* p_message;
};

#endif // MESSAGEDECORATOR_HPP