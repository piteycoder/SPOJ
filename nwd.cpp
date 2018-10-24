#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		int a,b,pom;
		cin>>a>>b;
		while (b!=0)
		{
			pom=b;
			b=a%b;
			a=pom;
		}
		cout << a << endl;
	}
	return 0;
}
