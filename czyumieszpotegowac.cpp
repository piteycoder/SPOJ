#include <iostream>
#include <cstdlib>
using namespace std;
int ostatnia_cyfra_a (string y);
int main()
{
	int t, b;
	string a;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		cin >> a >> b;
		if (b==0) cout << "1" << endl;
		else if (b==1) cout << ostatnia_cyfra_a(a) << endl;
		else for (int j=0;j<=9;j++)
		{
			if (j==ostatnia_cyfra_a(a))
			{
				if ((j==0)||(j==5)||(j==6)) cout << j << endl;
				else if (j==1) cout << "1" << endl;
				else if (j==2)
				{
					if (b%4==0) cout << "6" << endl;
					else if (b%4==1) cout << "2" << endl;
					else if (b%4==2) cout << "4" << endl;
					else cout << "8" << endl;
				} 
				else if (j==3)
				{
					if (b%4==0) cout << "1" << endl;
					else if (b%4==1) cout << "3" << endl;
					else if (b%4==2) cout << "9" << endl;
					else cout << "7" << endl;
				}
				else if (j==4) 
				{
					if (b%2==0) cout << "6" << endl;
					else cout << "4" << endl;
				}
				else if (j==7)
				{
					if (b%4==0) cout << "1" << endl;
					else if (b%4==1) cout << "7" << endl;
					else if (b%4==2) cout << "9" << endl;
					else cout << "3" << endl;
				}
				else if (j==8)
				{
					if (b%4==0) cout << "6" << endl;
					else if (b%4==1) cout << "8" << endl;
					else if (b%4==2) cout << "4" << endl;
					else cout << "2" << endl;
				}
				else
				{
					if (b%2==0) cout << "1" << endl;
					else cout << "9" << endl;
				}
			}
		}
	}
	return 0;
}
int ostatnia_cyfra_a (string y)
{
		int d=y.length();
		string p;
		p=y[d-1];
		int x=atoi(p.c_str());
		return x;
}
