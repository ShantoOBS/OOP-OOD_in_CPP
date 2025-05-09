/* 
  What is Operator Overloading?
Operator Overloading allows you to redefine the meaning of operators (like +, -, ==, etc.) for user-defined types (like classes).

This means you can make expressions like obj1 + obj2 work the way you want, depending on your class.



🔧 How it works:
Point operator + (const Point& other) tells C++ what to do when + is used between two Point objects.

Inside the function, we define how to add the x and y values.

This makes p1 + p2 work like math, even though Point is a custom type.

🧠 Common Operators You Can Overload:
Operator	Meaning
+, -, *, /	Arithmetic
==, !=, <, >	Comparison
=, +=, -=	Assignment
[]	Indexing (like arrays)
()	Function call operator

⚠️ Rules:
You cannot create new operators (e.g., ** is not allowed).

Some operators like ::, . and ?: cannot be overloaded.

Overloading should make the operator behave intuitively.


*/

//   Example: Overloading + for a Point class
#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    Point(int xVal, int yVal) {
        x = xVal;
        y = yVal;
    }

    // Overload '+' operator
    Point operator + (const Point& other) {
        return Point(x + other.x, y + other.y);
    }

    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(2, 3);
    Point p2(4, 5);

    Point p3 = p1 + p2;  // calls overloaded '+' operator

    p3.display();  // Output: (6, 8)

    return 0;
}

