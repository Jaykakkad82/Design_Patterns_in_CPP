//
// Created by jayka on 17-06-2024.
//
#include<iostream>
#include "car.h"
#include "Sedan.h"
#include "engine_enlarger.h"
#include "metalBody.h"

int main(){
    std::cout<< "=======Welcome to Demo of Decorator Design pattern"<<std::endl;

    car * mycar {nullptr};
    mycar = new Sedan("Audi");
    car*  mycar1 = new engine_enlarger(mycar, 120.0);
    car* mycar2 = new metalBody(mycar1, 88550.0, 5878.0);
    mycar2->select();

    std::cout << std::endl;
    std::cout << "my car is ready !!! "<< std::endl;

    delete mycar2;
    delete mycar1;
    delete mycar;



}