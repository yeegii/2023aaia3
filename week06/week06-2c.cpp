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
        //for(int b:a)
        int N=a.size();
        if(N%2==1)
            cout << a[N/2] << endl;
        else
            cout << (a[N/2-1]+a[N/2])/2 << endl;
    //    cout << b << ' ';


    }
}