#include "TV.cpp"
#include "Radio.cpp"
#include "BasicRemote.cpp"
#include "AdvanceRemote.cpp"

int main()
{
    Device* tv = new TV();
    Device* radio = new Radio();

    Remote* basic = new BasicRemote(tv);
    Remote* advance = new AdvanceRemote(radio);

    basic->togglePower();
    basic->volumeUp();

    advance->togglePower();
    advance->volumeUp();
    advance->mute();

    delete basic;
    delete advance;
    delete tv;
    delete radio;

    return 0;
}