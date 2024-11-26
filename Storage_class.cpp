// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

/* 
   What is storage class?
   -Storage class defines the scope and lifetime of variable and function 
   Type:-
   -auto (local) 
   -static 
   -register
   -extern (gobal)
*/

void fun(){
    
    int a=10;
    static int b=10;
    cout<<a<<" "<<b<<endl;
    a++;
    b++;
}
int main() {
   
  fun();
   fun();
    fun();
     fun();
   
   
}
