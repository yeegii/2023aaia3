#include <iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin >> a >> b && a!=0 && b!=0)
	{
		int temp=0;
		int count=0;
		while(a>0 || b>0)
		{
			if(a%10+b%10+temp>9)
			{
				temp=1;
				a/=10; b/=10;
				count++;
			}
			else
			{
				temp=0;
				a/=10; b/=10;
			}
		}
		if(count==1) cout << "1 carry operation." << endl;
		else if(count>1) cout << count << " carry operations." << endl;
		else cout << "No carry operation." << endl;
	}
}
