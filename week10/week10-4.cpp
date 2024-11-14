//week10-4.cpp
#include <iostream>
using namespace std;
int main()
{
	double h,w;
	cin >> h >> w;
	double bmi= w/(h*h);
	cout << bmi << endl;
	if(bmi<18.5) cout << "too thin";
	else if(bmi>=18.5 && bmi<24)cout << "standard";
	else cout << "too fat";

}
