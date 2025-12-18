#include <iostream>

class Base {
    int data; // private by default
    protected:
    int protectedData;
    public:
    Base() : data(0), protectedData(0) {}

    void show() {
        std::cout << "Base class show function called." << std::endl;
    }
};

class Derived : public Base {
    int derivedData;
    protected:
    int protectedDerivedData;
public:
    Derived() : derivedData(0), protectedDerivedData(0) {}
    void accessBaseMembers() {
        // data = 10; // Error: 'data' is private in 'Base'
        protectedData = 20; // OK: 'protectedData' is protected in 'Base'
        std::cout << "Derived class accessing protectedData: " << protectedData << std::endl;
    }
};

class AnotherDerived : private Derived {
public:
    void accessBaseMembers() {
        // data = 30; // Error: 'data' is private in 'Base'
        // protectedData = 40; // Error: 'protectedData' is protected in 'Base'
        std::cout << "AnotherDerived class cannot access Base members." << std::endl;
    }

    void accessDerivedMembers() {
        // protectedData = 50; // Error: 'protectedData' is not accessible
        protectedData = 50; // OK: 'protectedData' is protected in 'Derived'
        // protectedDerivedData = 60; // Error: 'protectedDerivedData' is not accessible
        std::cout << "AnotherDerived class cannot access Derived members." << std::endl;
    }
};

int main() {
    Base b;
    
    b.show();

    Derived d;
    d.accessBaseMembers();

    AnotherDerived ad;
    ad.accessBaseMembers();
    ad.accessDerivedMembers();

    return 0;
}
