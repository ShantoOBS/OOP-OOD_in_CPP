/* What is template ?
 - Template is the frame which define its actual meaing in a C++ programming 
   the main purpose of template is to its accept any type of value at the time
   of program execution.
  
  Function template: is also know as generic fuction a normal function works 
  only one type of value at a time but function template works with different
  type of value at a time. */


#include<bits/stdc++.h>
using namespace std;


template<class obj>

void print(obj a,obj b){
  
    cout<<a<<" "<<b<<endl;
    
}
int main() 
{
    print(10,20);
    print('a','b');
    print("Shanto","Shil");
    
   
}
