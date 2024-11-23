#include <bits/stdc++.h>
using namespace std;

/*
    constant data members in class
    - A constant data member cannot be changed even in a non-constant object. Therefore, it must be set at the time of initialization
      of the object
*/

class MyClass {
private:
    const int const_private_var;  // A constant variable (correct).
    int private_var;              // A non-constant variable (correct).

public:
    const int const_public_var;   // A public constant variable (correct).
    int public_var;               // A public non-constant variable (correct).

    // Constructor with initialization list
    MyClass(int cPri, int pri, int cPub, int pub) 
        : const_private_var(cPri), private_var(pri), const_public_var(cPub), public_var() { 
        // Mistake 1: Incorrect initialization for `public_var`.
        // `public_var()` does not assign any value to the variable.
    }

    // Getter for constant private variable
    int getConstantPriVar() {
        return const_private_var;
    }

    // Setter for constant private variable (illegal).
    void setConstantPriVar(int i) {
        const_private_var = i; // Mistake 2: Trying to modify a constant member.
    }

    // Getter for private_var
    int getPri() {
        return private_var;
    }

    // Setter for private_var
    void setPri(int i) {
        private_var = i;
    }
};

int main() {
    MyClass myObj(1, 2, 3, 4);

    // Accessing a constant private variable through its getter.
    cout << "Constant Private Variable: " << myObj.getConstantPriVar() << endl;

    // Trying to set a constant variable via a setter (illegal).
    myObj.setConstantPriVar(5);  // Mistake 3: This will cause a compilation error.

    // Accessing a constant public variable.
    cout << "Constant Public Variable: " << myObj.const_public_var << endl;

    // Trying to modify a constant public variable directly (illegal).
    myObj.const_public_var = 6;  // Mistake 4: Modifying a constant public variable is not allowed.

    // Accessing and modifying a non-constant public variable.
    cout << "Public Variable: " << myObj.public_var << endl;
    myObj.public_var = 7; // This is correct.

    return 0;
}
