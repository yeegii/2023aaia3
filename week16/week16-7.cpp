#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int a;
		cin >> a;
		vector<int>ans(a);
		int count=0;
		for(int i=0; i<a; i++) cin >> ans[i];

		for(int i=0; i<a; i++)
		{
			for(int j=i+1; j<a; j++)
			{
				if(ans[i]>ans[j])
				{
					swap(ans[i], ans[j]);
					count++;
				}
			}
		}
		cout << "Optimal train swapping takes " << count << " swaps." << endl;

	}
}
