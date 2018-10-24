#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t{0};
    cin.tie(nullptr);
    cin >> t;
    while(t--){
        int n, i, j, k, s, s1, s2{-1000000};
        cin >> n;
        vector< vector< vector<int> > > tab(n + 1, vector< vector<int> >(n+1,vector<int>(n+1,0)));
        vector< vector<int> > in(n+1, vector<int>(n+1,0));

        for(i = 1; i <= n; ++i){
            for(j = 1; i <= n; ++j){
                cin >> in[i][j];
            }
        }

        for(i = 1; i <= n; ++i){
            for(j = 1; j <= n; ++j){
                for(k = 1; k <= n; ++k)
                    tab[i][j][k] = tab[i][j-1][k] + in[i][j];
            }
            for(j = i - 1; j > 0; --j){
                for(k = 1; k <= n; ++k)
                    tab[j][i][k] = tab[j][i-1][k] + in[i][k];
            }

        }

        for(i = 1; i <= n; ++i){
            for(j = i; j <= n; ++j){
                s = 0; s1 = -1000000;
                for(k = 1; k <= n; ++k){
                    if(s > 0)
                        s += tab[i][j][k];
                    else
                        s = tab[i][j][k];
                    if(s > s1)
                        s1 = s;
                }
                if(s1 > s2)
                    s2 = s1;
            }
        }
        cout << s2 << endl;
    }
    return 0;
}
