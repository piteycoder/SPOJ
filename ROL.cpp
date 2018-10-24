#include <iostream>
using namespace std;
int main()
{
	int t, i, j, n;
	int liczba;
	int *tablica=new int[liczba];
	cin >> t;
	for (i=0;i<=t;i++)
	{
		cin >> n;
		for (j=0; j<=n; j++)
		{
			cin >> tablica[j];
			cout << tablica[j]<< " ";
		}
	}
	return 0;
}
