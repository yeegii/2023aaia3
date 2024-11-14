///week10-1.cpp
#include <iostream>
using namespace std;
class Cat
{ ///打class會幫忙打下括號和分號
    public:
        void print()
        {
            cout << "I am a cat. meow meow" << endl;
        }
};
class Mouse
{
    public:
        void print()
        {
            cout << "I am a mouse. chi chi" << endl;
        }
};
int main()
{
    Cat cat1,cat2;
    cat1.print();
    cat2.print();
    Mouse mouse1, mouse2;
    mouse1.print();
    mouse2.print();
}
