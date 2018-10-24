#include <iostream>
using namespace std;
int main()
{
	int t,n;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		int tab[n];
		for (int j = 0; j < n; j++)
		{
			cin >> tab[j];
		}
		for (int p=1;p<n;p=p+2)
		{
			cout << tab[p] << " ";
		}
		for (int k = 0; k < n; k=k+2)
		{
			cout << tab[k] << " ";
		}
		cout << endl;
	}
    return 0;
}

