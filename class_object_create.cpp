#include<bits/stdc++.h>
using namespace std;

class person{
    
       string name; // state 
       int age;
       
       public:
       
       void walk(){ // are behavior 
           cout<<"He or she can walk"<<endl;
       }
       
       void eat(){
           cout<<"He or she can eat"<<endl;
       }
       
       void sleep(){
           cout<<"He or she can sleep"<<endl;
       }
};
int main() {
   
     person obj;  // identity 
     obj.walk();
     obj.eat();
     obj.sleep();
     
   
}
