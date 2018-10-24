#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    unsigned t{0};
    cin >> t;

    while(t--){
        int n{0}, k{0};
        string bin;

        (cin >> n >> k).get();
        cin >> bin;

        int x, y, maxi, start, stop;
        x = y = maxi = start = stop = 0;
        vector <int> tab(n, 0);

        for (int i{0}; i < n; ++i){
            if (bin[i] == '0')
                ++x;
            else if (y < k){
                ++x;
                ++y;
                tab[stop++] = i;
            }
            else{
                if (x > maxi)
                    maxi = x;
                x = i - tab[start++];
                tab[stop++] = i;
            }
        }
        if (x > maxi)
            maxi = x;
        cout << maxi << endl;
    }
    return 0;
}
