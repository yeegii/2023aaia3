///week10-2.cpp
#include <iostream>
#include <string>
using namespace std;
class Cat
{ ///打class會幫忙打下括號和分號
    public:
        string name;
        void print()
        {
            cout << "I am a cat. My name is " << name << endl;
        }
};
int main()
{
    Cat cat1,cat2;
    cat1.name="小花";
    cat2.name="小白";
    cat1.print();
    cat2.print();
}
