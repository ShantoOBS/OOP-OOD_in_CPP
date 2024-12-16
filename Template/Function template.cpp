#include <bits/stdc++.h>
using namespace std;
/*
  What is template ?
  - Template is the frame which defines its actual meaning ia a c++ progamming. The main purpose of template is to it accept any type of value at the time of program execution.
  
   We can use template in c++ by two ways:
   1) Function template
   2) Class template
   
   Function template is also know as generic function. A normal function works only one type of value at a time but function template works with different-different type at a time.
   */
template<class A>
void print(A x,A y){
   
        cout<<x<<" "<<y<<endl;
};

int main() {    
    
    print(23,54);
    print('a','b');
    print("shanto","shil");
   
    return 0;
}

