#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x{0};
    int y;

    while(cin >> y)
        x ^= y;
    cout << x << endl;
    return 0;
}
