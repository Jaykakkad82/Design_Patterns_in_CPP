//
// Created by jayka on 08-06-2024.
//

#include "singleton.h"
#include <iostream>

singleton* singleton::anInstance= nullptr;

singleton::singleton() {
    std::cout<<"constructor called"<<std::endl;

}

// NOTE: WE HAVE TO RETURN A REFERENCE (singleton &)
// if we ttry to return object Singleton (& not reference) then copy constructor will be called.
singleton& singleton::getinstance() {
    if (anInstance == nullptr){
        anInstance = new singleton();
    }
    return *anInstance;
}