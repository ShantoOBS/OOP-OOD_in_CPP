// Coding Ninjas Link: https://www.naukri.com/code360/guided-paths/oops-in-c/content/274160/offering/3757748?leftPanelTabValue=PROBLEM&customSource=studio_nav

#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class Person {

    // Complete the class
    string name;
    int age;

    public:

    void setValue(string s,int a){
        name=s;
        age=a;
    }

    int get_age(){
        return age;
    }

    string get_name(){
        return name;
    }

};

int main() {

    //Write your code here
     Person obj;
     string name;
     int age;
     cin>> name>> age;

     obj.setValue(name,age);

     cout<<"The name of the person is "<<obj.get_name()<<" and the age is "<<obj.get_age()<<".";


    return 0;
}
