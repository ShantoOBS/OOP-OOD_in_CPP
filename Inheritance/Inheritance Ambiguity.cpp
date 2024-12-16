// C++ program to resolve inheritance
// ambiguity

#include<iostream>
using namespace std;
/*
In multiple inheritances, when one class is derived from two or more base classes then there may be a possibility that the base
classes have functions with the same name, and the derived class may not have functions with that name as those of its base classes. 
If the derived class object needs to access one of the similarly named member functions of the base classes then it results in 
ambiguity because the compiler gets confused about which base’s class member function should be called. 

  */
// Base class A

class A {
	public:

	void func() {
		cout << " I am in class A" << endl;
	}
};

// Base class B

class B {
	public:

	void func() {
		cout << " I am in class B" << endl;
	}
};

// Derived class C
class C: public A, public B {


};

// Driver Code

int main() {

	// Created an object of class C
	C obj;

	// Calling function func() in class A
	obj.A::func();

	// Calling function func() in class B
	obj.B::func();

	return 0;
}
