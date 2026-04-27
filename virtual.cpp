#include <iostream>
- using namespace std;

class Animal {
public:
    // This is EARLY BINDING because it is not virtual [cite: 5, 8]
    void speak() { cout << "Generic Animal Sound" << endl; }

    // This is LATE BINDING because of the 'virtual' keyword [cite: 5, 8]
    virtual void move() { cout << "Animal moves" << endl; }
};

class Cat : public Animal {
public:
    void speak() { cout << "Meow" << endl; }
    void move() override { cout << "Cat pounces" << endl; }
};

int main()
{
    Cat myCat;
    Animal* ptr = &myCat; // Base class pointer referring to a derived object

    // 1. EARLY BINDING (Compile-time)
    ptr->speak();
    // Output: "Generic Animal Sound"
    // The compiler sees 'ptr' is an Animal* and links it to Animal::speak().

    // 2. LATE BINDING (Runtime)
    ptr->move();
    // Output: "Cat pounces"
    // Because 'move' is virtual, C++ looks at the ACTUAL type of the object (Cat) at runtime.

    return 0;
}
