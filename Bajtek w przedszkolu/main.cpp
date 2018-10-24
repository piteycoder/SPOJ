#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    unsigned n{0};
    while(cin >> n){
        vector<int> c(n);
        vector<int> k(n);
        string tab;
        int a{0}, b{0}, i{0};
        unsigned long long x{0};

        cin.get();
        cin >> tab;
        for(;i < 2*n; ++i){
            if(tab[i] == 'C')
                c[a++] = i;
            else if(tab[i] == 'K')
                k[b++] = i;
        }
        for(i = 0; i < n; ++i){
            x += abs(c[i]-k[i]);
        }
        cout << x << endl;
    }
    return 0;
}
