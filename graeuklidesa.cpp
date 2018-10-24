#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int a,b;
		cin>>a>>b;
		int pom;
		if (a==b) cout << a+b << endl;
		else
		{
			while (b!=0)
			{
				pom=b;
				b=a%b;
				a=pom;
			}
			cout << 2*a << endl;
		}
	}
	return 0;
}
