#include <iostream>
using namespace std;
int main()
{
	float a,b,c;
	int i;
	while (cin>>a)
	{
		cin>>b>>c;
		if (((a+b)<c)||((b+c)<a)||((a+c)<b))
		{
			cout << "0" << endl;
		}
		else cout << "1" << endl;
	} 
	return 0;
}
