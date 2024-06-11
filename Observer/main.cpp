#include "Isubject.h"
#include "con_Subject_1.h"
#include "con_Object_1.h"
#include <iostream>

//
// Created by jayka on 09-06-2024.
//
int main(){

    // creating pointer of abstract class
    Isubject* asub; //  pointers required for polymorphism behaviour
    Iobject* aobj; //  pointers required for polymorphism behaviour

    Iobject* bobj;

    // Creating instance of only concrete classes and binding to pointer of abstract class
    asub = new con_Subject_1();
    aobj = new con_Object_1();
    bobj = new con_Object_1();

    // objects subscribing to subject
    std::cout<<"STEP 1 =====> Add observer and execute notify"<<std::endl;
    asub->AddObserver(aobj);
    asub->AddObserver(bobj);
    asub->notify();

    // Unsubscribing behaviour
    std::cout<<"STEP 2 =====> Remove 1 observer and execute notify"<<std::endl;
    asub->RemoveObserver(aobj);
    asub->notify();

    std::cout<<"STEP 3 =====> Remove both (2) observer and execute notify"<<std::endl;
    asub->RemoveObserver(bobj);
    asub->notify();

}
