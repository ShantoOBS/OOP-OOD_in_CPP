/* In C++, structs are user-defined types that are used to create structured objects. 
They allow us to collect variables of different data types in a single name. 
Structs are used for lightweight objects, such as rectangles, colors, Points, etc. In C++, 
structs can contain data members and member functions.*/

#include <iostream>  
using namespace std;  
struct Student {  
    string first_name;  
    string last_name;  
    int age;  
    float grade;  
};  
int main()   
{  
    // Defining a structure variable  
    Student student1;  
    // Assigning values to structure members  
    student1.first_name = "Alice";  
    student1.last_name = "Johnson";  
    student1.age = 20;  
    student1.grade = 90.5;  
    // Displaying the structure members  
    cout << "The First Name is: " << student1.first_name << endl;  
    cout << "The Last Name is: " << student1.last_name << endl;  
    cout << "Age is: " << student1.age << endl;  
    cout << "The Grade is: " << student1.grade << endl;  
    return 0;  
}  
