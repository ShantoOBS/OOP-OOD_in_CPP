#include <bits/stdc++.h>
using namespace std;

/*
    Free Copy Constructor and Shallow Copy (Bit Copy):
    - If user doesn't provide a copy constructor, compiler provides one and does a bit copy

    Sometimes bit copy will be fine. But sometimes it will lead to unexpected results.
    See the example below

    What is Shallow Copy or Bit Copy ?
    Ans : With bit-copy, only the pointer is copied - not the pointed object. This may be risky.

    ALERT :  So, Bit-copy(Shallow Copy) is not same as Object Copy(Deep Copy)  !!!
*/

class String {
public:
    char* str_;
    size_t len_;

public:
    // Constructor
    String(const char* s) : str_(strdup(s)), len_(strlen(s)) {}

    // Custom Copy Constructor (Deep Copy)
    // If We Never Use Custom Copy Constructor That Time is Call (Shallow Copy)
    String(const String& other) {
        str_ = strdup(other.str_);  // Allocate new memory and copy string
        len_ = other.len_;         // Copy length
    }

    // Destructor
    ~String() {
        cout << "String Destructor. Bye Bye !" << endl;
        free(str_);
    }

    // Function to convert the string to uppercase
    void strToUpper() {
        for (size_t i = 0; i < len_; i++) {
            str_[i] = toupper(str_[i]);
        }
    }

    // Print function
    void print() {
        cout << "(" << str_ << ": " << len_ << ")" << endl;
    }
};

int main() {
    String s("batman");  // Create a String object

    s.print();           // Output: (batman: 6)

    s.strToUpper();      // Convert to uppercase
    s.print();           // Output: (BATMAN: 6)


    return 0;
}
