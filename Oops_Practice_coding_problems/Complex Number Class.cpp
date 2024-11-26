
// Coding Ninjas Link : https://www.naukri.com/code360/guided-paths/oops-in-c/content/274160/offering/3757742?leftPanelTabValue=PROBLEM&customSource=studio_nav


#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class ComplexNumbers {
    // Complete this class
    public:
     int real;
     int imaginary;

     ComplexNumbers(int real,int imaginary){
         this->real=real;
         this->imaginary=imaginary;
     }

     void plus(ComplexNumbers obj){
         real=real+obj.real;
         imaginary=imaginary+obj.imaginary;
     }

      void multiply(ComplexNumbers obj){
      int temp = real;
      real = real * obj.real;
      real = real - (imaginary* obj.imaginary);
      imaginary = imaginary*obj.real +temp*obj.imaginary ;

    }

     void print(){
         cout<<real<<" + i"<<imaginary;
     }

};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}
