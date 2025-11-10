#ifndef MESSAGE_HPP
#define MESSAGE_HPP

#include <string>

class Message
{
public:
    virtual ~Message() = default;
    virtual std::string getText() const = 0;
};

#endif // MESSAGE_HPP