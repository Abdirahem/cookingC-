#include <iostream>

int main()
{
    int n=200;

    int a=0,b=1;
std::cout<<"\n\n ------- FIBONACCI SERIES -------- \n\n";
    while(a<n)
    {
        std::cout<<a<<" ";
        int next = a + b;
        a = b;
        b = next;
        std::cout<<"";
    }
    std::cout<<"\n\n";

    return 0;
}