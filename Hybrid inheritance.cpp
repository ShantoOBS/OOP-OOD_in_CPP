// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/*Hybrid inheritance is a combination of more than one type of inheritance. For example, A child and parent class relationship that follows multiple and hierarchical inheritances can be called hybrid inheritance.
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
class D : public B, public C{

     public:
     void print4(){
       cout<<" Inside function D "<<endl;
     }
      
};

int main() {    
    
 
    
    D obj4;
    obj4.print2();
    obj4.print3();
    obj4.print4();
    

    return 0;
}


