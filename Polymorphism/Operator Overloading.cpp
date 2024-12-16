// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/* 
Operator Overloading: 

C++ also provides options to overload operators. For example, we can make the operator (‘+’) for the string class to concatenate two strings. 
We know that this is the addition operator whose task is to add two operands. When placed between integer operands, a single operator, ‘+,’ adds them and concatenates them when placed between string operands.

 
*/

    
class A {    
 
     public:
     void operator+(A &obj){
         cout<<"Hi Shanto Shil"<<endl;
     }
};


int main() {    
    
  
    A obj1,obj2;
    
    obj1+obj2;

    return 0;
}


