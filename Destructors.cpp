#include <iostream>
#include <cmath>
using namespace std;

/*
    Deconstructor in C++
    Deconstructor gives us a completely well defined structured way of managing the life time of every object in a clean manner.
    -It is implicitly called when a class object goes out of scope or by operator delete (later we will know this).
    -No parameter is allowed.
    -Can't be overloaded
    -Unique for the class (Since no parameter allowed -> Hence no overloading allowed -> Hence, Unique)
    -If user provided no destructor, default destructor is called by compiler (which has nothing in its body)
    -NOTE: Destructors are called in reverse order of construction of objects (They are LIFO in nature)
*/

class Hero {
   public :
   
      Hero(){
          cout<<"Constructor"<<endl;
      }
      
      ~Hero(){
          cout<<"Bye Bye"<<endl;
      }

};


//Application
int main() {
     
    Hero obj; // //Static
    
    Hero * obj_=new Hero(); // //Dynamic
   
    delete obj_; // //manually destructor call
    
}
