#include <iostream>
#include <vector>
#include <unordered_map> /// C++11的功能 如果用預設C++98 會不認識

using namespace std;
int main()
{
    vector<int>a;
    unordered_map<int,int>m;
    m[999] = 13;
    m[137]=7;
    cout << "m[999]的值是" << m[999] << endl;
    cout << "m[137]的值是" << m[137] << endl;
    return 0;
}
