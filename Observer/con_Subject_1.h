//
// Created by jayka on 11-06-2024.
//

#ifndef OBSERVER_CON_SUBJECT_1_H
#define OBSERVER_CON_SUBJECT_1_H

#include "Isubject.h"

class con_Subject_1: public Isubject{
public:
    virtual void AddObserver(Iobject *);
    virtual void RemoveObserver(Iobject *);
//    virtual void notify();

};


#endif //OBSERVER_CON_SUBJECT_1_H
