//
// Created by jayka on 17-06-2024.
//

#include "Sedan.h"
#include <iostream>
#include <utility>

Sedan::Sedan(std::string brandName):abrand(std::move(brandName)) {}

void Sedan::select() {
    std::cout << "This is a Sedan car of brand "<< abrand;
}


