//
// Created by jayka on 11-06-2024.
//

#include "con_Subject_1.h"
#include <algorithm>

// Add and Remove might also remain almost the same for every type of subject
void con_Subject_1::AddObserver(Iobject * obj) {
    mobservers.push_back(obj);
}

void con_Subject_1::RemoveObserver(Iobject * obj) {
    auto it = find(mobservers.begin(),mobservers.end(),obj);
    mobservers.erase(it);
}
