#include <iostream>

#include "Message.hpp"
#include "SimpleMessage.cpp"
#include "EncryptedMessage.cpp"
#include "CompressedMessage.cpp"

int main()
{
    Message* msg = new SimpleMessage("Hello, World!");
    std::cout << msg->getText() << "\n";

    msg = new EncryptedMessage(msg);
    std::cout << msg->getText() << "\n";

    msg = new CompressedMessage(msg);
    std::cout << msg->getText() << "\n";

    delete msg;

    return 0;
};