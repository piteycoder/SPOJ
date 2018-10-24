#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		string napis;
		cin>>napis;
		int dlugosc=napis.length();
		int n=dlugosc/2;
		napis.erase(n,n);
		cout << napis << endl;
	}
	return 0;
}
