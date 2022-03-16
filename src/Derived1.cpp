//
// Created by Xarthy on 0015 March 15, 2022.
//

#include "Derived1.h"

Derived1::Derived1(int test) : Base(test) {}

Derived1::~Derived1() {}

void Derived1::do_something() {
    std::cout << "Derived1!!!" << std::endl;
}
