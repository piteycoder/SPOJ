#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int liczba=0;
	if (n<3) cout << "NIE" << endl;
	else
	{
	
		for (int i=0;i<=n;i=i+2)
		{
			cout << liczba << " ";
			liczba=n-1;
			cout << liczba << " ";
			liczba=i+2;
		}
		cout << endl;
	}
	return 0;
}
