#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int t=1; t<=n; t++)
	{
		bool ans=true;
		char x,y;
		int a;
		cin >> x >> y >> a;
		int b[a][a];
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<a;j++)
			{
				cin >> b[i][j];
				if(b[i][j]<0) ans=false;
			}

		}
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<a;j++)
			{
				if(b[i][j]!=b[a-1-i][a-1-j]) ans=false;
			}
		}
		if(ans) printf("Test #%d: Symmetric.\n",t);
		else printf("Test #%d: Non-symmetric.\n",t);

	}
}
