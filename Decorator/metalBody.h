//
// Created by jayka on 17-06-2024.
//

#ifndef DECORATOR_METALBODY_H
#define DECORATOR_METALBODY_H

#include "carDecorator.h"

class metalBody: public carDecorator{
protected:
    float w{0};
    float v{0};
public:
metalBody(car * acar , float weight, float volume);
void select();
};


#endif //DECORATOR_METALBODY_H
