#include <iostream>
using namespace std;

/*
  Abstraction means providing only some of the information to the user by hiding its internal implementation details

*/

class abstraction {
private:
    int a, b;

public:
    // method to set values of private members
    void set(int x, int y) {
        a = x;
        b = y;
    }

    void display() {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main() {
    abstraction obj;
    obj.set(10, 20);

    /*
     Advantages Of Abstraction
     -Only you can make changes to your data or function, and no one else can.
     -It makes the application secure by not allowing anyone else to see the background details.
     -Increases the reusability of the code.
     -Avoids duplication of your code.
  */
    obj.display();
    return 0;
}
