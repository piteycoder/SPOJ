#include "stdafx.h"

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	string wyraz;
	while (cin >> wyraz)
	{
		int d;
		d = wyraz.length();
		int i = 0;
		for (i=d-1; i >= 0; i--)
		{
			cout << wyraz[i];
		}
		cout << endl;
	}
    return 0;
}
