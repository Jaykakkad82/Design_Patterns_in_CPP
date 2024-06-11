//
// Created by jayka on 11-06-2024.
//

#include "Isubject.h"
#include <iostream>

// NOTE : We assume that the notify implementation will remain the same
void Isubject::notify() {
    std::cout<< " Subject transmitting the values"<<std::endl;
    for(auto a:mobservers){
        a->onNotify();
    }
}
