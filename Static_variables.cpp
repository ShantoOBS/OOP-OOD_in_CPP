#include <iostream>
using namespace std;

class GfG {
public:
    static int i;

    GfG(){
        // Do nothing
    };
};

int GfG::i = 1; // value initialisation 

int main()
{
   cout<< GfG::i <<endl; // can access without create a object
}
