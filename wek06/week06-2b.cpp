# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;
int main()
{
    vector<int>a;
    int n;
    while(cin >> n)
    {
        a.push_back(n);
        sort(a.begin(),a.end());
        for(int b:a)
            cout << b << ' ';
        cout << endl;


    }
}