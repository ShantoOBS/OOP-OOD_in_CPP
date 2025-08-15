/* 1. Abstract Class in C++

An abstract class is a class that cannot be instantiated and contains at least one pure virtual function.

Pure Virtual Function Syntax
virtual returnType functionName(parameters) = 0;

Example
*/
#include <iostream>
using namespace std;

class Shape { // Abstract class
public:
    // Pure virtual function
    virtual void draw() = 0;

    // Non-pure virtual or normal function (optional)
    void info() {
        cout << "This is a shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle." << endl;
    }
};

int main() {
    // Shape s; // ❌ Error: Cannot instantiate abstract class
    Shape* shape = new Circle();
    shape->draw();
    shape->info();
    delete shape;
}

/*
Key Points:

A class with at least one pure virtual function becomes abstract.

You must override all pure virtual functions in the derived class to make it concrete.

Abstract classes can have data members and normal functions.

2. Interface in C++

C++ does not have a dedicated interface keyword like Java,
but you can create an interface by:

Using a class with only pure virtual functions

No data members (optional rule for pure interfaces)

Usually, a virtual destructor is added for cleanup.

Example (Interface Style in C++)

  */

#include <iostream>
using namespace std;

// Interface
class Drawable {
public:
    virtual void draw() = 0; // Pure virtual function
    virtual ~Drawable() {}   // Virtual destructor
};

class Circle : public Drawable {
public:
    void draw() override {
        cout << "Drawing a Circle." << endl;
    }
};

class Square : public Drawable {
public:
    void draw() override {
        cout << "Drawing a Square." << endl;
    }
};

int main() {
    Drawable* d1 = new Circle();
    Drawable* d2 = new Square();

    d1->draw();
    d2->draw();

    delete d1;
    delete d2;
}

/*
Key Points:

An interface in C++ is just an abstract class with only pure virtual functions.

Often, we use class InterfaceName { public: virtual ~InterfaceName() {} }; to ensure safe deletion.

Interfaces are useful for multiple inheritance.

*/
