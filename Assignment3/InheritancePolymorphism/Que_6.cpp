//Write a C++ Program to show access to Private Public and Protected using Inheritance 

#include <iostream>

class Base {
public:
    int publicMember; // Accessible from anywhere

protected:
    int protectedMember; // Accessible from Base and derived classes

private:
    int privateMember; // Accessible only within Base class
};

class Derived : public Base {
public:
    // Public members of Base are inherited as public in Derived
    void accessPublicMember() {
        std::cout << "Public member (from Base): " << publicMember << std::endl;
    }

    // Protected members of Base are inherited as protected in Derived
    void accessProtectedMember() {
        // Can access protectedMember directly because Derived inherits from Base
        std::cout << "Protected member (from Base): " << protectedMember << std::endl;
    }

    // Private members of Base are not accessible in Derived
    // uncommenting the following line will cause a compilation error
    // void accessPrivateMember() {
    //     std::cout << "Private member (from Base): " << privateMember << std::endl;
    // }
};

int main() {
    Derived derivedObject;

    // Public member of Base can be accessed directly from the derived object
    derivedObject.publicMember = 10;
    std::cout << "Public member (accessed directly): " << derivedObject.publicMember << std::endl;

    // Derived object can call member functions to access protected members
    derivedObject.accessProtectedMember();

    // Private member of Base cannot be accessed from the derived object or its member functions

    return 0;
}
