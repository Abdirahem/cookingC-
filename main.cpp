#include <iostream>
#include <string>
using namespace std;

class Human{
    public:
        string name;
        int age;
    
        void calling(){
            cout<<"My name is "<<name<<" and I am "<<age<<" old."<<endl;
        }

};


int main() {

    Human male, female;

    male.name = "Abdirahim";
    male.age=29;

    male.calling();

    cout<<"===================="<<endl;

    female.name="Sahra";
    female.age=20;
    female.calling();

    return 0;
}

