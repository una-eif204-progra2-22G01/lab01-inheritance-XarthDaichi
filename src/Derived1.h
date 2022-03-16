#pragma once
#include "Base.h"
//
// Created by Xarthy on 0015 March 15, 2022.
//

#ifndef LAB01_INHERITANCE_DERIVED1_H
#define LAB01_INHERITANCE_DERIVED1_H


class Derived1 : Base {
private:
public:
    Derived1(int test);

    virtual ~Derived1();

    void do_something();
};


#endif //LAB01_INHERITANCE_DERIVED1_H
