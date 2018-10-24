#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float a, b, c;
	float wynik;
	cin>>a>>b>>c;
	if ((a==0)&&(b==c)) cout << "NWR" << endl;
	else if ((a==0)&&(b!=c)) cout << "BR" << endl;
	else if ((a!=0))
	{
		wynik=(b-c)/-a;
		cout << fixed << setprecision(2) << wynik << endl;
	}	
	return 0;
}
