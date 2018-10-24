#include <iostream>

using namespace std;

int main()
{
    int t, n, x, i, x2, y, z;
    cin.tie(nullptr);

    cin >> t;
    while(t--){
        cin >> n;
        for (y = i = 0; i < n; ++i){
            cin >> x;
            if(i < 2 || z != (x2 > x))
                ++y;
            z = x2 > x;
            x2 = x;
        }
        cout << y << endl;
    }
    return 0;
}
