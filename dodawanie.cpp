#include <iostream>
using namespace std;
int main()
{
	int t, i, n, suma=0;
	cin >> t;
	cin >> n;
	int liczba[n];
	for (i=0;i<n;i++)
	{
		cin >> liczba[n];
		suma+=liczba[n];
	}
	cout << suma;
	return 0;	
}
