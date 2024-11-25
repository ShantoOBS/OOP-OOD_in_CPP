#include <bits/stdc++.h>
using namespace std;

/*
    Friend function
    -Has access to the private and protected members of the class (breaks encapsulation)
    -must have its prototype included withing the scope of the class prefixed with the keyword friend
    -does not have its name qualified with the class scope (MyClass:: is not required)
    -is not called with an invoking object of the class
    -can be declared friend in more than one class

    -It can be a global function
    -Any member function of a different class could also be a friend of a class
    -It can be a function template
*/

class shanto;

class redoy{
    
    private:
    int money=10;
    
    friend void senha(shanto,redoy);
};

class shanto{
    private:
    int money=20;
    
    friend void senha(shanto ,redoy);
};

void senha(shanto r1,redoy r2){
    cout<<"sum "<<r1.money+r2.money<<endl;
}


int main() {
    shanto obj1;
    redoy obj2;
    senha(obj1,obj2);
return 0;
}
