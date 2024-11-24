#include <iostream>
#include <cstdlib>
using namespace std;

/*
    Core OOPs concepts in C++
*/

//this pointer ?
//It specifies every object by its own address

//What is the type of "this" pointer ?
//Ans : For a class X, the type of this pointer is ‘X* ‘.
//      Also, if a member function of X is declared as const, then the type of this pointer is ‘const X *’

class X{
    public:
        int x = 5;
        X(){
            cout<<this<<endl;
        }
        void print() {
            cout << this->x << endl;
        }
};

int main() {
    X obj;
    cout<<&obj<<endl;
 
    obj.print();
return 0;
}
