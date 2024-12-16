// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

/* In single inheritance, one class can extend the functionality of another class. There is only one parent class and one child class in single inheritances.
*/
    
class Dad {    
   protected:
    int balance =1000;
};

class child : public Dad{
      public:
      void print(){
          cout<<balance<<endl;
      }
};

int main() {    
    
    
    child obj;
    obj.print();

    return 0;
}


