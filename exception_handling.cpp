// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/* 
  What is exception handling?
  -An exception is unexected /unwanted/abnormal situation that occured at runtime called exception
*/ 

int main() {
     
    cout<<"Execution Starting....."<<endl;
    int a,b,c;
    cout<<"Enter Two Number: ";
    
    cin>>a>>b;
    
    try{
        
        if(b==0)throw b;
        c=a/b;
        cout<<"Result: "<<c<<endl;
    }catch(int x){
        cout<<"can't devide by "<<x<<endl;
        
        return  0;
    }
     
}
