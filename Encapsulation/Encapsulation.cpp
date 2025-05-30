#include <iostream>
using namespace std;

/* Encapsulation is the conecpt of oops that is used to wrap the data member and member function into a single unit.
    
    The main purpose of encapsulation is to secure the data 
    Its a information hidding 
    
 */

class Student {    
    // private data members    
private:    
    string studentName;    
    int studentRollno;    
    int studentAge;    

    // get method for student name to access      
    // private variable studentName    
public:        
    string getStudentName() {            
        return studentName;        
    }    

    // set method for student name to set     
    // the value in private variable studentName    
    void setStudentName(string studentName) {        
        this->studentName = studentName;    
    }    

    // get method for student rollno to access      
    // private variable studentRollno    
    int getStudentRollno() {        
        return studentRollno;    
    }    

    // set method for student rollno to set     
    // the value in private variable studentRollno    
    void setStudentRollno(int studentRollno) {        
        this->studentRollno = studentRollno;    
    }    

    // get method for student age to access      
    // private variable studentAge    
    int getStudentAge() {        
        return studentAge;   
    }    

    // set method for student age to set     
    // the value in private variable studentAge    
    void setStudentAge(int studentAge) {        
        this->studentAge = studentAge;    
    }
};

int main() {    
    Student obj;    
    // setting the values of the variables    
    obj.setStudentName("Avinash");    
    obj.setStudentRollno(101);    
    obj.setStudentAge(22);    

    // printing the values of the variables    
    cout << "Student Name : " << obj.getStudentName() << endl;    
    cout << "Student Rollno : " << obj.getStudentRollno() << endl;    
    cout << "Student Age : " << obj.getStudentAge(); 

    return 0;
}
