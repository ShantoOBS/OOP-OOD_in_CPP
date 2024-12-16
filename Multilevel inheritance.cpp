// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

/* When a class inherits from a derived class, and the derived class becomes the base class of the new class, it is called multilevel inheritance. In multilevel inheritance, there is more than one level.
*/
    
class Father {    
   protected:
    int father_balance =1000;
};

class Mother : public Father{
       protected:
       int mother_balance =1000;
  
};
class child : public Mother{
   
       protected:
       int child_balance =10;
       
      public:
      void print(){
          cout<<mother_balance+father_balance+child_balance<<endl;
      }
      
      
};


int main() {    
    
    
    child obj;
    obj.print();

    return 0;
}


