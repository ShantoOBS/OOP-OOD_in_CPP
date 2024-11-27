#include<bits/stdc++.h>
using namespace std;

/* 
     What is constructor?
     -constructor is a special type of function which is automatilcally called at the time of object creation.
     
     Node:- The main purpose of construtor is used to initialize the object
     
     Type:- 1)Default construtor
            2)Parametrized construtor
            2)Copy construtor
            
    */        

class A{
   public:
   int x,y;    
   
   A(){
       cout<<"Default construtor"<<endl;
   }
   A(int a,int b){
       x=a;
       y=b;
       cout<<"Paramerized construtor"<<endl;
       cout<<a<<" "<<b<<endl;
   }
   
   A(A &ref){
       cout<<"Copy construtor"<<endl;
       x=ref.x;
       y=ref.y;
       cout<<x<<" "<<y<<endl;
   }
    
};
int main() {
   
    A obj; // call default construtor
    
    A obj1(10,20); // call parameterized construtor
    
    A obj2=obj1; // call copy construtor
    
}
