#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		int obzartuchy;
		float pudelka, suma=0, wpudelku;
		cin>>obzartuchy>>wpudelku;
		int czasy[obzartuchy];
		int zjedzone[obzartuchy];
		for (int j=0;j<obzartuchy;j++)
		{
			cin>>czasy[j];
			zjedzone[j]=86400/czasy[j];
			if (czasy[j]>86400) {zjedzone[j]=0;}
			suma+=zjedzone[j];		
		}
		pudelka=suma/wpudelku;
		cout << fixed << setprecision(0)<<ceil(pudelka) << endl;
	}
	
	return 0;
}
