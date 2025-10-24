#include <iostream>


int main()
{

    int baz = 25;
    int* bazptr = nullptr;
    std::cout<<bazptr<<std::endl;

    bazptr = &baz;

    std::cout<<bazptr<<std::endl;

    return 0;
}