
// Coding Ninjas Link : https://www.naukri.com/code360/guided-paths/oops-in-c/content/274160/offering/3757747?leftPanelTabValue=PROBLEM

#include<bits/stdc++.h>
using namespace std;

class Fraction {
    int num;
    int deno;
    // Complete the class
    public:
    Fraction(int n, int d){
        num = n;
        deno = d;
    }

    void add(Fraction f2){
        int tNum = (num * f2.deno) + (deno * f2.num);
        int tDeno = (deno * f2.deno);
        this -> num = tNum;
        this -> deno = tDeno;
    }

    void multiply(Fraction f2){
        this -> num = num * f2.num;
        this -> deno = deno * f2.deno;

    }
    void simplify(){
        int g = __gcd(num, deno);
        if(g == 0) return;
        this -> num = num / g;
        this -> deno = deno / g;
    }
    void print(){
        cout << num << '/' << deno << endl;
    }
};

void solve(Fraction &f){
    int query = 0, n1 = 0, d1 = 0;
    cin >> query >> n1 >> d1;
    Fraction f2 = Fraction(n1, d1);
    if(query == 1){
        f.add(f2);
        f.simplify();
    }else {
        f.multiply(f2);
        f.simplify();

    }
    f.print();

}

int main() {

    //Write your code here
    int num = 0, deno = 0, t = 0;
    cin >> num >> deno >> t;
    Fraction master = Fraction(num, deno);
    while(t--){
        solve(master);
    }

    return 0;
}
