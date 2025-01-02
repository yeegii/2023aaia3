#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a, b;
	cin >> a >> b;
	if(a.size()>b.size()) cout << 1;
	else if(a.size()<b.size())  cout << -1;
	else
	{
		if(a[0]>b[0]) cout << 1;
		else if(a[0]==b[0]) cout << 0;
		else cout << -1;
	}

}
