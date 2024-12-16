// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/*In hierarchical inheritance, one class is a base class for more than one derived class.
*/

    
class A {    
 
     public:
     void print1(){
       cout<<" Preant class A "<<endl;
     }
};
class B : public A{
    public:
     void print2(){
       cout<<" Inside function B "<<endl;
     }
  
};
class C : public A{
     public:
     void print3(){
       cout<<" Inside function C "<<endl;
     }
      
};


int main() {    
    
    
    A obj1;
    obj1.print1();
    
    B obj2;
    obj2.print1();
    obj2.print2();
    
    C obj3;
    obj3.print1();
    obj3.print3();
    

    return 0;
}


