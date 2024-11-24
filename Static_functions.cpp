// C++ program to demonstrate static
// member function in a class
#include <iostream>
using namespace std;

class GfG {
public:
    // static member function
    static void printMsg() { cout << "Welcome to GfG!"; } // static member function only access static merber and can not use this pointer
};

// main function
int main()
{
    // invoking a static member function
    GfG::printMsg();
}
