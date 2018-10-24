#include <iostream>
#include <cstdlib>
#include <sstream>
using namespace std;
int main()
{
	string napis;
	char napis2[200];
	getline(cin,napis);
	cout << napis<<endl;
	int a[200], i=0;
	while (i!='\0')
	{
		a[i]=(int)napis[i];
		i++;
	}
	for (int j=0;j<i;j++)
	{
		if (a[j]==90) 
		{
			a[j]=67;
		}
		else if (a[j]==89) 
		{
			a[j]=66;
		}
		else if (a[j]==88)
		{
			a[j]=65;
		}
		else a[j]=a[j]+3;
	}
	while (i!=0)
	{
		napis2[i]=(char)a[i];
		i--;
	}
	cout << napis2;
	
	return 0;
}
