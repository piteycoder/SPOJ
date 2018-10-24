#include <iostream>
using namespace std;
int main()
{
	unsigned t, liczba;
	int dlugosc;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		cin>>liczba;
		if (liczba>=10) cout << "0 0"<<endl;
		else if ((liczba==1)||(liczba==0)) cout << "0 1" << endl;
		else if (liczba==2) cout << "0 2" << endl;
		else if (liczba==3) cout << "0 6" << endl;
		else if (liczba==4) cout << "2 4" << endl;
		else if ((liczba==5)||(liczba==6)) cout << "2 0" << endl;
		else if (liczba==7) cout << "4 0"<<endl;
		else if (liczba==8) cout << "2 0"<<endl;
		else cout << "8 0"<<endl;
	}
	return 0;
}

