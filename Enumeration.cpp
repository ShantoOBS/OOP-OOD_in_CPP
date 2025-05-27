/* In C++, Enumeration (Enum) is a user-defined data type that contains a fixed set of named integer constants.
We can define the enumeration using the enum keyword. It helps to make the code more readable and maintainable..*/

#include <iostream>    
using namespace std;  //using standard namespace  
enum month {Jan, Feb, Mar, Apr, May, June};    
int main()   //Main Function  
{    
    month mon_name;    
    mon_name = Mar;    
    cout << "Month: " << mon_name+1<<endl;    
    return 0;    
}  
