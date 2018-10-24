#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned t{0};
    cin >> t;
    cout.setf(ios::fixed);
    cout.precision(2);

    unsigned a{0}, b{0};
    while(t--){
        cin >> a >> b;
        cout << 0.5 * sqrt(a * b) * (a + b) << endl;
    }
    return 0;
}
