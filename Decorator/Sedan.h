//
// Created by jayka on 17-06-2024.
//

#ifndef DECORATOR_SEDAN_H
#define DECORATOR_SEDAN_H
#include "car.h"
#include <string>

class Sedan: public car{
    std::string abrand {"unknown"};
public:
    Sedan(std::string);
    virtual void select();

};


#endif //DECORATOR_SEDAN_H
