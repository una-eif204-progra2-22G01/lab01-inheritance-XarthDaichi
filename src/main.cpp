#include "Derived1.h"
#include "Derived2.h"

// function main begins program execution
int main(int argc, char *argv[]) {
    std::cout << "Welcome to the UNA!" << std::endl;

    Derived1 derived1(3);
    derived1.do_something();

    Derived2 derived2(4);
    derived2.do_something();

    return 0;
}  // end function main