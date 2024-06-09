//
// Created by jayka on 08-06-2024.
//
#include<iostream>
#include "singleton.h"
// ============= THINGS TO KEEP IN MIND IN C++ IMPLEMENTATION ========================
// 1.  The method getInstance() has to return a reference (singleton&) : Else copy constructor will be invoked
// 2. The identifier in the MAIN function has to be a reference (Singleton &) and not object identifier (Singleton) : Else operator= will be invoked
// 3. For safety, delete the copy constructor and assignment operator in the header file


int main(){
std::cout<<"Hi There"<<std::endl;
singleton& a = singleton::getinstance();  // a should be a Singleton reference else operator= will be invoked
a.i=2;
std::cout<< "value of i in a: " << a.i << std::endl;

// lets try to call getInstance and check if we get original instance or a new instance is created
singleton& b = singleton::getinstance();  // b should be a singleton reference

// if b.i value is 2, then original instance is found else if b.i == 0 then a new instance was created
std::cout<< "value of i in b: " << b.i << std::endl;

}
