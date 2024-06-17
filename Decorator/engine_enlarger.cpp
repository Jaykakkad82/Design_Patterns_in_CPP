//
// Created by jayka on 17-06-2024.
//

#include "engine_enlarger.h"
#include "carDecorator.h"
#include <iostream>

engine_enlarger::engine_enlarger(car *acar, float power): carDecorator(acar), cc(power) {}

//metalBody::metalBody(car *acar, float weight, float volume): carDecorator(acar),w(weight), v(volume) {


void engine_enlarger::select() {
    (dynamic_cast<carDecorator*>(a_car))->callSelect() ;
    std::cout<< " has Engine Enlarger of power "<< cc << " CC ";

}

//void metalBody::select() {
//    (dynamic_cast<carDecorator*>(a_car))->callSelect() ;

