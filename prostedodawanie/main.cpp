#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int n, suma=0;
        cin>>n;
        int *tab = new int[n];
        for (int k=0;k<n;k++)
        {
        	cin >> tab[k];
        	suma+=tab[k];
		}
	cout << suma << endl;
    }
    return 0;
}
