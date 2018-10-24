#include <iostream>
#include <array>

using namespace std;

typedef array< array<char, 5009>, 5009> Tab;
int n, m;
void go(int i, int j, Tab& tab)
{
    tab[i][j] = 'o';
    if(j < m - 1 && tab[i][j+1] == '.')
        go(i, j+1, tab);
    if(j && tab[i][j-1] == '.')
        go(i, j-1, tab);
    if(i < n - 1 && tab[i + 1][j] == '.')
        go(i+1, j, tab);
    if(i && tab[i-1][j] == '.')
        go(i-1, j, tab);
}

int main()
{
    int i, j, x, t;
    cin.tie(nullptr);
    cin >> t;
    while(t--){
        Tab tab;
        x = 0;
        (cin >> n >> m).get();
        for(i = 0; i < n; ++i){
            for(j = 0; j < m; ++j){
                cin >> tab[i][j];
            }
        }

        for(i = 0; i < n; ++i){
            if(tab[i][0] == '.')
                go(i, 0, tab);
            if(tab[i][m - 1] == '.')
                go(i, m-1, tab);
        }

        for(i = 1; i < m - 1; ++i){
            if(tab[0][i] == '.')
                go(0, i, tab);
            if(tab[n-1][i] == '.')
                go(n-1, i, tab);
        }

        for(i = 0; i < n; ++i){
            for(j = 0; j < m; ++j){
                if(tab[i][j] == 'X'){
                    if(!i || tab[i - 1][j] == 'o')
                        ++x;
                    if(i == n - 1 || tab[i+1][j] == 'o')
                        ++x;
                    if(!j || tab[i][j - 1] == 'o')
                        ++x;
                    if(j == m - 1 || tab[i][j+1] == 'o')
                        ++x;
                }
            }
        }
        cout << x << endl;
    }

    return 0;
}
