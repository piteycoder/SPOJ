#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, x, y;
    long long maxx = -2e9, minx = 2e9, maxy = -2e9, miny = 2e9;
    cin.tie(nullptr);

    cin >> n;
    while(n--){
        cin >> x >> y;

        x -= y;
        y += x + y;
        if (y > maxy)
            maxy = y;
        if (y < miny)
            miny = y;
        if (x > maxx)
            maxx = x;
        if (x < minx)
            minx = x;
    }
    cout << max(abs(maxx-minx), abs(maxy - miny)) << endl;
    return 0;
}
