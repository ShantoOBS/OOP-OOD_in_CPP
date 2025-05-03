/* Class template: is also know as generic class we use class template when user does't know what kind of value pass from the paramiter . */


#include<bits/stdc++.h>
using namespace std;


template<class obj>

class print{
  
    public:
    print(obj a,obj b){
    cout<<a<<" "<<b<<endl;
    }
    
};
int main() 
{
    print<int>ob(10,20);
    
   
}
