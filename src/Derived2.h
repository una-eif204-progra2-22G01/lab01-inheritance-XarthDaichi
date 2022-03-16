#pragma once
#include "Base.h"
//
// Created by Xarthy on 0015 March 15, 2022.
//

#ifndef LAB01_INHERITANCE_DERIVED2_H
#define LAB01_INHERITANCE_DERIVED2_H


class Derived2 : Base {
private:
public:
    Derived2(int test);
    virtual ~Derived2();

    void do_something();
};


#endif //LAB01_INHERITANCE_DERIVED2_H
