#ifndef OBSERVER_HPP
#define OBSERVER_HPP

class Observer
{
public:
    virtual void update(float temperature) = 0;
    virtual ~Observer() = default;
};

#endif // OBSERVER_HPP