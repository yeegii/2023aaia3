///week10-1.cpp
#include <iostream>
using namespace std;
class Cat
{ ///��class�|�������U�A���M����
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
