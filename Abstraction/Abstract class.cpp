// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/* 
  What is abstract class ?
  -Abstract class are such classes that you are defined to inherit only by other classes. The purpose of abstract classes is to provide a structure to other classes which you can inherit.
  
  1) We can't create object for abstract class
  2) A class which contain at least one pure virtual function called abstract class.
  
  Syntax:
    
    virtual return-type function-name()=0;
 
*/

    
class animal {    
     public :
     virtual void sound()=0;
     void eat(){
         cout<<"animal eating,,,,"<<endl;
     }
};

class dog : public animal{
     public:
     void sound(){
         cout<<"woof woof,,,"<<endl;
     }
};



int main() {    
    
  
    dog obj;
    obj.sound();
    obj.eat();
    return 0;
}


