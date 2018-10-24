#include <iostream>
#include <array>

using namespace std;

int main()
{
    int t, n, i, j, sum, partsum;
    array<int, 50009> dp;
    array<int, 1009> in;

    cin.tie(nullptr);
    cin >> t;
    while(t--){
        cin >> n;
        sum = partsum = 0;
        dp[0] = t + 1;

        for(i = 0; i < n; ++i){
            cin >> in[i];
            sum += in[i];
        }

        if (sum&1){
            cout << "NIE" << endl; continue;
        }

        sum >>= 1;

        for(i = 0; i < n; ++i){
            for(j = partsum > sum ? sum : partsum; j >= 0; --j){
                if(dp[j] == t + 1 && j + in[i] <= sum)
                    dp[j+in[i]] = t + 1;
            }
            if (dp[sum] == t + 1)
                break;
            partsum += in[i];
        }

        if(dp[sum] == t + 1)
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    return 0;
}
