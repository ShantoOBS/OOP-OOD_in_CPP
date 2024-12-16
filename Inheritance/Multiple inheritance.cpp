// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/*In multiple inheritance, a class can inherit more than one class. This means that a single child class can have multiple parent classes in this type of inheritance.
*/

int a,b; 
    
class A {    
 
     public:
     void input(){
         cout<<"Enter your input ....";
        cin>> a>>b;
     }
     void add(){
          cout<<"Addition,,, "<<a+b<<endl;
     }
};
class B {
       public:
        void sub(){
          cout<<"Subtraction,,, "<<a-b<<endl;
        }
  
};
class C : public B ,public A{
       public:
       void mul(){
          cout<<"Multiplcation,,, "<<a*b<<endl;
        }
      
};


int main() {    
    
    
    C obj;
    obj.input();
    obj.add();
    obj.sub();
    obj.mul();
    

    return 0;
}


