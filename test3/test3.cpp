#include <iostream>
using namespace std;

int main()
{
	int a, b=42, i=0;
	while (cin >> a)
	{
		cout << a << endl;
		if ((a != b) && (a == 42)) { ++i; }
		b = a;
		if (i == 3) { break; }
	}
    return 0;
}


