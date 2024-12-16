#include <bits/stdc++.h>
using namespace std;
/*
 Function overloading: 

When there are multiple functions in a class with the same name but different parameters, these functions are overloaded. 
The main advantage of function overloading is that it increases the program’s readability. 
Functions can be overloaded by using different numbers of arguments or by using different types of arguments. 
We have already discussed function overloading in detail in the previous module.

*/
void add(int a, int b) {
    cout << a + b << endl;
}

void add(double a, double b) {
    cout << a + b << endl;
}

void add(int a) {
    cout << 1 + a << endl;
}

/*
ALERT !!! (ERROR)
int add(int a) {
    return a+1;
}
*/

int main() {
    /*
        Why Function Overloading (Static Polymorphism) is required at all ?
        Ans: Same functionality but takes different argument types

        Overload Resolution ?
        Ans: Function selection by compiler is called Overload Resolution (done in compile time)

        Note:
          - Binding happens at compile time.
          - Two functions having same signature but different return types cannot be overloaded (ALERT !!!)
          - Overloading allows "Static Polymorphism" (Explained in Polymorphism section)
        Types :
            - Same      # of parameters but of different types
            - Different # of parameters
    */

    add(1, 2);
    add(1.3, 2.3);
    add(3);

return 0;
}
