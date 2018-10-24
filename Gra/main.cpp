#include <iostream>

using namespace std;

int main()
{
    int n, k, t;
    cin >> t;
    while(t--){
    cin >> n >> k;

    if(n < k || n == 3 * k){
        cout << "NIE";
    }
    else {
        if(n > 3 * k){
            cout << "TAK, ZMNIEJSZY SIE";
        }
        else
            cout << "TAK, ZWIEKSZY SIE";
    }
    cout << endl;
    return 0;
    }
}
