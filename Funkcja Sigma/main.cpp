#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t{0};
    cin >> t;

    unsigned result;
    unsigned number;
    unsigned i;
    while(t--){
        result = 0;
        cin >> number;
        for(i = 1; i < sqrt(number); ++i){
            if (number % i == 0){
                result += i;
                result += number / i;
            }
        }
        if (i == (int)sqrt(number))
            cout << result + (int)sqrt(number) << endl;
        else cout << result << endl;
    }
    return 0;
}
