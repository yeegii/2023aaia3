///week10-3.cpp 有建構涵式
#include <iostream>
#include <string>
using namespace std;
class Cat
{ ///打class會幫忙打下括號和分號
    public:
        Cat(string _name)
        {
            name=_name;
        }
        string name;
        void print()
        {
            cout << "I am a cat. My name is " << name << endl;
        }
};
int main()
{
    Cat cat1("小花"),cat2("小白");
    cat1.print();
    cat2.print();
}
