#include<iostream>
#include<typeinfo>
using namespace std;

void info(int a)
{
    int age=a;
    int* ageAdress = &age;

    cout<<"The type of age is: "<<typeid(age).name()<<endl;
    cout<<"The value of age is: "<<age<<endl;
    cout<<"The memory address of age is: "<<ageAdress<<endl;
}

 int main()
 {
    info(67);
    return 0;

 }