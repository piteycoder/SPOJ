#include <iostream>
using namespace std;
int rekur(int x, unsigned k=0)
{
	if (x==1) 
	{
		return k;
	}
	else if (x%2==0)
	{
		return rekur((x/2),++k);
	}
	else
	{
		return rekur((3*x+1),++k);
	}
}
int main()
{
	int t;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		int s;
		cin>>s;
		cout << rekur(s) << endl;
	}
	return 0;
}

