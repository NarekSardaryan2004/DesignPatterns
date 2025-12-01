#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include "Observer.hpp"

#include <vector>
#include <algorithm>

class Subject
{
public:
    virtual ~Subject() = default;

    void attach(Observer* obs) {
        observers.push_back(obs);
    }

    void detach(Observer* obs) {
        observers.erase(
            std::remove(observers.begin(), observers.end(), obs),
            observers.end()
        );
    }

    void notify(float temperature) {
        for (auto* obs : observers) {
            obs->update(temperature);
        }
    }
protected:
    std::vector<Observer*> observers;
};

#endif // SUBJECT_HPP