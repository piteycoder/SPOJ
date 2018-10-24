#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int t, n, a, naj;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		int suma=0;
		cin>>n;
		int tab[n], j;
		for (j=0;j<n;j++)
		{
			cin>>tab[j];
			suma+=tab[j];
		}
		a=suma/n;
		for (int k=1;k<n;k++)
		{
			naj=tab[0];
			if ((abs(tab[k]-a))<(abs(tab[k-1])-a))
			{
				tab[k]=naj;
			}
		}
		cout << naj << endl;
		
	}
	return 0;
}
