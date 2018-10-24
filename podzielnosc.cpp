#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		unsigned n,x,y;
		cin>>n>>x>>y;
		for (int k=1;k<n;k++)
		{
			if ((k%x==0)&&(k%y!=0))
			{
				cout << k << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
