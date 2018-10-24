#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    unsigned t{0};
    cin >> t;

    while(t--){
        int n{0};
        cin >> n;

        int len{pow(3, n - 1)};
        string cantor(178000, ' ');
        int i{0}, j{0};
        int noempty{0};
        for (cantor[len] = 0; i < len; ++i){
            cantor[i] = '_';
        }

        for(i = 1; i < n; ++i){
            for(noempty = j = 0; j < len; ++j){
                if (cantor[j] == ' '){
                    for (int k{0}; k < noempty/3; ++k)
                        cantor[j - 2*noempty/3+k] = ' ';
                    noempty = 0;
                }
                else
                    ++noempty;
            }
            for (int k{0}; k < noempty / 3; ++k){
                cantor[len-2*noempty/3+k] = ' ';
            }
        }
        cout << cantor << endl;
    }
    return 0;
}

