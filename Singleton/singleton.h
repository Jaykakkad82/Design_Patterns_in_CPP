//
// Created by jayka on 08-06-2024.
//

#ifndef SINGLETON_SINGLETON_H
#define SINGLETON_SINGLETON_H


class singleton {
static singleton* anInstance ;  // private by default
singleton(); //private constructor

// ===== FOR SAFETY , DELETE COPY CONSTRUCTOR  AND ASSIGNMENT OPERTOR =====
singleton(const singleton&) = delete;
singleton& operator= (const singleton&) = delete;
// =======================================================================
public:
    static singleton& getinstance(); // public method to get instance
    int i =0;

    // copy constructor & assignment operator : delete

};


#endif //SINGLETON_SINGLETON_H
