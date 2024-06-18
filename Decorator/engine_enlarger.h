//
// Created by jayka on 17-06-2024.
//

#ifndef DECORATOR_ENGINE_ENLARGER_H
#define DECORATOR_ENGINE_ENLARGER_H


#include "carDecorator.h"

class engine_enlarger: public carDecorator{

    float cc{0};

public:
    engine_enlarger(car * acar , float power);
    void select() override;

};


#endif //DECORATOR_ENGINE_ENLARGER_H
