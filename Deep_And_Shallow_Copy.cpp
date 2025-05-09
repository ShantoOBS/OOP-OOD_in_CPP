/*
Shallow Copy – Copies only pointers (not the data they point to)
Definition: Copies the values of all member variables as is, including pointers.

Effect: Both original and copied objects share the same memory for dynamic data.

Problem: Changes in one object may affect the other; can lead to issues like double deletion.
*/

#include <iostream>
using namespace std;

class ShallowCopy {
public:
    int* data;

    ShallowCopy(int value) {
        data = new int(value);
    }

    // Default copy constructor (shallow copy)
    void showData() {
        cout << "Value: " << *data << ", Address: " << data << endl;
    }

    ~ShallowCopy() {
        delete data;
    }
};

int main() {
    ShallowCopy obj1(10);
    ShallowCopy obj2 = obj1;  // Shallow copy

    cout << "Original object: ";
    obj1.showData();

    cout << "Copied object: ";
    obj2.showData();

    *obj2.data = 99;  // Changing obj2 also affects obj1

    cout << "After changing obj2:\n";
    obj1.showData();
    obj2.showData();

    return 0;
}


--------------------------------------------------------------------------------------------------------------------------------------------

/*
Deep Copy – Copies actual data (new memory allocation)
Definition: Copies all values, and for pointers, allocates new memory and copies the content.

Effect: Each object has its own copy of dynamically allocated memory.

Advantage: Objects are independent, avoiding issues like memory conflicts.
*/

#include <iostream>
using namespace std;

class DeepCopy {
public:
    int* data;

    DeepCopy(int value) {
        data = new int(value);
    }

    // Custom copy constructor (deep copy)
    DeepCopy(const DeepCopy& source) {
        data = new int(*(source.data));
    }

    void showData() {
        cout << "Value: " << *data << ", Address: " << data << endl;
    }

    ~DeepCopy() {
        delete data;
    }
};

int main() {
    DeepCopy obj1(10);
    DeepCopy obj2 = obj1;  // Deep copy

    cout << "Original object: ";
    obj1.showData();

    cout << "Copied object: ";
    obj2.showData();

    *obj2.data = 99;  // Changing obj2 doesn't affect obj1

    cout << "After changing obj2:\n";
    obj1.showData();
    obj2.showData();

    return 0;
}

    
