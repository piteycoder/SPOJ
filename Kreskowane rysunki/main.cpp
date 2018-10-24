#include <iostream>
#include <array>

using namespace std;

int main()
{
    int n;
    int x{0}, y{0};
    int z, z2;
    int cnt{0}, ans{0};
    array <int, 1000009> hashTab, check;
    array <int, 500009> sums;
    char curr, last{0};

    cin.tie(nullptr);
    cin >> n;
    while(n--){
        cin >> curr;
        if(curr == 'N')
            ++y;
        else if(curr == 'S')
            --y;
        else if(curr == 'W')
            --x;
        else if(curr == 'E')
            ++x;

        ++hashTab[500000 + (z = x + y)];
        if(!check[500000 + z]){
            sums[cnt++] = 500000 + z;
            check[500000 + z] = 1;
        }
        if(curr + last == 'E' + 'S' || curr + last == 'W' + 'N')
            --hashTab[500000 + z2];

        z2 = z;
        last = curr;
    }

    for(x = 0; x < cnt; ++x)
        ans += hashTab[sums[x]]>>1;
    cout << ans << endl;
    return 0;
}
