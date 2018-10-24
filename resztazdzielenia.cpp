#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		long a,b,r;
		cin>>a>>b;
		r=a%b;
		cout<<r<<endl;
	}
	return 0;
}
