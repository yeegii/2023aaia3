///week03-1.cpp 了解range-based for迴圈
/// codeblocks settings compiler 把-std=c+11 開起來
# include <iostream>
# include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for(char c : s)
    {
        cout << c ;
        cout << endl;
    }
}
