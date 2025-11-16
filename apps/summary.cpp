#include<iostream>
#include<string>

int main()
{

    int year = 2010;
    auto age = (year - 1800 >100 ) ? "Too old" : " You are " + std::to_string(year - 1800) + " old";

    std::cout<<"Age :"<<age<<std::endl;
    std::cout<<typeid(age).name()<<std::endl;

    return 0;
}