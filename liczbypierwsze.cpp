#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, i, liczba, pliczba;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin >> liczba;
		if (liczba<2) 
		{
			cout << "NIE"<<endl;
		}
		else if ((liczba==2)||(liczba==3))
		{
			cout << "TAK" << endl;
		}
		else if (liczba>=4)
		{
			pliczba=sqrt(liczba);
			for (int j=2;j<=pliczba;j++)
			{
				if (liczba%j==0)
				{
					cout << "NIE" << endl;
					break;
				}
				else if (j==pliczba)
				{
					cout << "TAK" << endl;
				}
			}
			
		}

	}
	return 0;
}
