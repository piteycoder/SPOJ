#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int t, i;
	cin >> t;
	unsigned int pole[t], a[t];
	float obwod[t];
	for (i=0;i<t;i++)
	{
		cin>>pole[i];
		obwod[i]=(sqrt(pole[i])*4);
		cout<<fixed<<setprecision(0)<<obwod[i]<<endl;
	}
	return 0;
}
