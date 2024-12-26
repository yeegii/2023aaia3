#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	cin >> a;
	int ans=0;
	for(int i=0; i<a.size(); i++){
		ans=ans*2+(a[i]-'0');
	}
	cout << ans << endl;
}
