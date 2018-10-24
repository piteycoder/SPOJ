#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		unsigned long a,b,r;
		cin>>a>>b;
		if (a==0) cout << "TAK" << endl;
		else 
		{
			r=b%(a-1);
			if (r==0) cout << "NIE" << endl;
			else cout << "TAK" << endl;
		}
	}
	return 0;
}
