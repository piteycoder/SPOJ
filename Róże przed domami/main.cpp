#include <iostream>

using namespace std;

int main()
{
    int houses{0};
    cin >> houses;
    int x, y, z;
    int a, b, c;
    int d, e, f;

    cin >> x >> y >> z;

    while(--houses){
        cin >> a >> b >> c;
        d = a + min(y, z);
        e = b + min(x, z);
        f = c + min(x, y);

        x = d; y = e; z = f;
    }

    cout << min(min(x,y),min(y,z)) << endl;
    return 0;
}
