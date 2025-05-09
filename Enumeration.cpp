/* In C++, enumeration is a user-defined data type 
that consists of a set of named integer constants. It helps in assigning meaningful
names to integer values to improve code readability and maintainability.*/

#include <iostream>
using namespace std;

// Defining enum
enum fruit {
    APPLE, BANANA = 5, ORANGE
};

int main() {

    // Creating enum variable
    fruit f = BANANA;
    cout << f << endl;
    
    // Changing the value
    f = ORANGE;
    cout << f;
    return 0;
}
