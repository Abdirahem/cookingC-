#include <iostream>
#include <string>
using namespace std;

string convertBase(int num, int base)
{
    string result = "";

    if(num==0)
    {
        return "0";
    }

    const string digits = "0123456789ABCDEF";
    while (num>0)
    {
        result = digits[num % base] + result;
        num /=base;
    }

    return result;
}


int main()
{

    int num, base;


    cout << "Enter a decimal (base 10) number: ";
    cin >> num;
    cout << "Enter the base to convert to (2 = binary, 8 = octal, 16 = hexadecimal): ";
    cin >> base;
    

    string convertedNumber = convertBase(num, base);
cout << (base == 16 ? "The number " + to_string(num) + " in base " + to_string(base) + " is: 0x" + convertedNumber : "The number " + to_string(num) + " in base " + to_string(base) + " is: " + convertedNumber) << endl;
    
    

    return 0;
}