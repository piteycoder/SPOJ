#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		int n;
		while (cin>>n)
		{
		int *tab = new int [n];
		for (int k=0;k<n;k++)
		{
			cin >> tab[k];
		}
		for (int j=n-1;j=0;j--)
		{
			cout << tab[j];
		}
		cout << endl;
		break;
		}
	}
	return 0;
}
