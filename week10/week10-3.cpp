///week10-3.cpp ���غc�[��
#include <iostream>
#include <string>
using namespace std;
class Cat
{ ///��class�|�������U�A���M����
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
    Cat cat1("�p��"),cat2("�p��");
    cat1.print();
    cat2.print();
}
