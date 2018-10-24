#include <iostream>
using namespace std;
int main()
{
	int t, i;
	string tablica;
	cin>>t;
	for (i=0;i<t;i++)
	{
		cin.ignore();
		getline(cin,tablica);
		int dlugosc=tablica.length();
		for (int j=dlugosc-1;j=0;j--)
		{
			cout << tablica[i];
		}
	}
	return 0;
}
