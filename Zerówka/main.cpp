#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cin.tie(nullptr);

    double l, a, b, c, mini, maxi;
    long long x, y, n, q;

    cin >> n >> l;
    cin >> q;
    a = l/4; b = -3*l; c = (4+n)*l;
    while(q--)
    {
        cin >> x >> y;
        mini = a*x*x+b*x+c; maxi = a*y*y+b*y+c;
        if(mini > maxi)
            l = mini, mini = maxi, maxi = l;
        if(-b/(2*a) >= x && -b/(2*a) <= y)
        {
            l = (-b*b+4*a*c)/(4*a);
            if(l < mini)mini = l;
            if(l > maxi)maxi = l;
        }
        cout << (long long)(floor(maxi) - ceil(mini)+1) << "\n";
    }
    return 0;
}
