//
// Created by jayka on 17-06-2024.
//

#ifndef DECORATOR_CARDECORATOR_H
#define DECORATOR_CARDECORATOR_H

#include "car.h"

class carDecorator: public car{
protected:
    car * a_car;
public:
    explicit carDecorator(car*);
    void callSelect();
    virtual void select() =0;
    virtual ~carDecorator() = default;
};


#endif //DECORATOR_CARDECORATOR_H
