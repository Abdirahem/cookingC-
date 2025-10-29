#include <iostream>


int main()
{

    int baz = 25;
    //nullptr is a keyword that represents a null pointer—a pointer that doesn't point to any valid memory address. It's a safer, type-safe alternative to the older NULL macro, which was typically defined as 0 or (void*)0.
    int* bazptr = nullptr;
    std::cout<<bazptr<<std::endl;
// A pointer holds the memory address of a variable.
    bazptr = &baz;
    std::cout<<bazptr<<std::endl;

    //Dereferencing a pointer (using the * operator) gives you access to the value stored at that memory address.
    std::cout<<*bazptr<<std::endl;





    return 0;
}