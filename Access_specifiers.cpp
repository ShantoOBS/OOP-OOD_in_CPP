#include<bits/stdc++.h>
using namespace std;

class person{
    
     private: // use only this block and frind class
     int a;
     protected: // use this block and inherit class
     int b;
     public: // can access any place
     int c;
    
};
int main() {
   
     person obj;  // identity 
  //   obj.a=10; error
   //  obj.b=20; error
     obj.c=30;
     
   //  cout<<obj.a<<endl;  not allow
   //  cout<<obj.b<<endl;  not allow
     cout<<obj.c<<endl;
     
     
   
}
