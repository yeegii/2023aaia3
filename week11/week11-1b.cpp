# include <iostream>
using namespace std;
int digits(int n)
{
    int ans=0;
    while(n>9)
    {
        ans+=n%10;
        n/=10;
    }
    return ans;
}
int main()
{
    int n;
    while(cin >> n)
    {
        cout << digits(n) << endl;
    }
}
