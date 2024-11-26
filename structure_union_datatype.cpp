// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

/* 
   What is structure?
   -structure is a user defined datatype which are used to store dis-similar type of value
   -the size of structure is equals sum of all structure member size

   What is union?
  -is similer to structure 
  -the size of union is equal to its biggest memeber size
  -union never save any value 

  
*/

struct str1{
    int marks; // int 4 byte
    float avg;  // float 4 byte
    double salary; // double 8 byte
};
union str2{
    int marks;
    float avg;
    double salary;
};
int main() {
   
    struct str1 obj1;
    union str2 obj2;
    
    cout<<"Structure size= "<<sizeof(obj1)<<endl;
    cout<<"Union size= "<<sizeof(obj2)<<endl;
   
}
