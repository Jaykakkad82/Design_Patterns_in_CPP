//
// Created by jayka on 17-06-2024.
//

#include <utility>
#include "carDecorator.h"

carDecorator::carDecorator(car *acarInstance): a_car(acarInstance) {
}

void carDecorator::callSelect() {
    a_car->select();
}

