// wieksegmentolka.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	unsigned int sum;
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		sum = 0;
		cin >> n;
		sum += n-1;
		int *seg = new int[n];
		for (int j = 0; j < n; j++)
		{
			cin >> seg[j];
			sum += seg[j];
		}
		cout << sum << endl;
		delete [] seg;
	}
    return 0;
}

