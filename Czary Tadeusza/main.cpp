#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, l{1}, r{1000000000}, m, last;
    bool ok;
    cin.tie(nullptr);
    cin >> n;
    vector<int> tab(n,0);
    for(int i{0}; i < n; ++i)
        cin >> tab[i];

    while(l < r){
        m = l + r>>1; ok = 1; last = tab[0] - m;
        for(int i{1}; i < n; ++i){
            if(tab[i]-m > last)
                last = tab[i]-m;
            else if(tab[i] > last || tab[i]+m > last)
                ++last;
            else{
                ok = 0;
                break;
            }
        }
        if(ok)
            r = m;
        else
            l = m + 1;
    }
    cout << l << endl;
    return 0;
}
