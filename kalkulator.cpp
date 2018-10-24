#include <iostream>
using namespace std;
int main()
{
	int a,b,z;
	while (cin>>z)
	{
		cin>>a>>b;
		if (z=='+') cout << a+b << endl;
		else if (z=='-') cout << a-b << endl;
		else if (z=='*') cout << a*b << endl;
		else if (z=='/') cout << a/b << endl;
		else cout << a%b << endl;
	}
	return 0;
}
