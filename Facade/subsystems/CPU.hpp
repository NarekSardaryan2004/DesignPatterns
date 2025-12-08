#ifndef CPU_HPP
#define CPU_HPP

class CPU
{
public:
    void freeze();
    void jump(long position);
    void execute();
};

#endif // CPU_HPP