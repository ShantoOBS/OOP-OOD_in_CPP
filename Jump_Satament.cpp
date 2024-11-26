// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/*

  Jump satament:-
  -break
  -continue
  -goto
  -exit
  -return
  
  */

int main() {
     
     int num;
     cin>> num;
     
     if(num>=18) goto vote;
     else goto notvote;
     
     
     vote: cout<<"You can vote here,,,!"<<endl;
     
     return 0;
     
     notvote: cout<<"You will never able to vote,,!"<<endl;
     
}
