#include <iostream>
using namespace std;

/*
    const-ness in UDT (user defined data types)
    - If an object is a constant, non of its data members can be changed
    - A constant object cannot invoke a normal methods of the class because it can make changes in the data members
    - Constant objects can invoke (select) methods if they are constant member functions
    But, no data members can be changed inside constant member functions
*/

class MyClass {
    int var;
public:
    MyClass(int v) : var(v) {}

    void setVar(int v) { // Non-const member function
        var = v;
    }

    int getVar() const { // Const member function
        return var;
    }
};

int main() {
    MyClass obj(10);          // Normal object
    const MyClass constObj(20); // Constant object

    obj.setVar(15);            // Works
    cout << obj.getVar() << endl; // Works

    // constObj.setVar(25);    // Error: Cannot call non-const function on a const object
    cout << constObj.getVar() << endl; // Works

    return 0;
}
