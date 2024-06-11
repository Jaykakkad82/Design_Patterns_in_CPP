//
// Created by jayka on 11-06-2024.
//

#ifndef OBSERVER_ISUBJECT_H
#define OBSERVER_ISUBJECT_H

#include "vector"
#include "Iobject.h"

class Isubject {
public:
    virtual void AddObserver(Iobject*)=0;
    virtual void RemoveObserver(Iobject*)=0;
    virtual void notify();

protected:
    std::vector<Iobject*>mobservers;

};


#endif //OBSERVER_ISUBJECT_H
