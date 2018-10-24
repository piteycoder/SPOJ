#include <iostream>
#include <array>
using namespace std;

const int arSize{5009};
int main()
{
    unsigned t{0};
    cin.tie(nullptr);

    cin >> t;
    while(t--){
        int m, n, mn{0};
        array <int, arSize> M, cnt;
        cin >> m >> n;

        for(int i{0}; i < m; ++i){
            cin >> M[i];
        }

        for(int i{0}; i < m; ++i){
            for(int j{i + 1}; j < m; ++j){
                ++cnt[(M[j] - M[i] + n)%n];
                ++cnt[(M[i] - M[j] + n)%n];
            }
        }

        for(int i{1}; i < n; ++i){
            if(cnt[i] >= m - 1){
                mn = i;
                break;
            }
        }
        cout << mn << endl;
    }
    return 0;
}
