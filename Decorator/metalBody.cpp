//
// Created by jayka on 17-06-2024.
//

#include "metalBody.h"
#include <iostream>

metalBody::metalBody(car *acar, float weight, float volume): carDecorator(acar),w(weight), v(volume) {
}

void metalBody::select() {
    (dynamic_cast<carDecorator*>(a_car))->callSelect() ;
    std::cout<< " has metalbody of weight "<< w << " kg and volume of " << v << " sq.meter ";
}

