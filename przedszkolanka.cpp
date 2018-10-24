#include <iostream>
using namespace std;
int nwd (int x, int y)
{
	int pom;
	while (y!=0)
	{
		pom=y;
		y=x%y;
		x=pom;
	}
	return x;
}
int main()
{
	int N;
	cin>>N;
	for (int i=0;i<N;i++)
	{
		int a,b,nww,ab;
		cin>>a>>b;
		ab=a*b;
		nww=(a*b)/nwd(a,b);
		cout << nww << endl;
	}
}
