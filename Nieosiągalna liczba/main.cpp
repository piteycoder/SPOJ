#include <iostream>

using namespace std;

int main()
{
    int x, a, b, n, t;
    cin.tie(nullptr);

    cin >> t;
    while(t--){
        cin >> n;
        a = 1;
        b = 0;
        while(n--){
            cin >> x;
            if(!b){
                if(x > a)
                    b = a;
                a += x;
            }
        }
        if (!b)
            cout << a << endl;
        else
            cout << b << endl;
    }
    return 0;
}
