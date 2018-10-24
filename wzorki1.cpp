#include <iostream>
using namespace std;
int main()
{
	int i, j;
	int wiersz, kolumna;
	cin >> wiersz >> kolumna;
	for (i=1;i<=kolumna;i=i+2)
	{
		cout << "*";
		for (j=2;j<=kolumna-1;j=j+2)
		{
			cout << ".";
		}
		cout << endl;
	}
	return 0;
}
