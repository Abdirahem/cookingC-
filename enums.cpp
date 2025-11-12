#include<iostream>

// A struct in C++ is a way to define a user-defined data type that can hold variables of different types. and alaso
struct X
{
    //An enum is a way to define a set of named integer constants.
    /*left = 'l' assigns the character 'l' (which has an ASCII value of 108) to the name left.
    right = 'r' assigns the character 'r' (which has an ASCII value of 114) to the name right.*/
    enum direction { left = 'l', right = 'r' };
};

int main()
{
    X x;
    std::cout<<"Hey go "<<static_cast<char>(x.direction::left)<<" side"<<std::endl;
    // static_cast<char>(x.direction::left) explicitly converts the integer value x.direction::left (which is 108, the ASCII value of 'l') back to the character 'l'.
    return 0;
}