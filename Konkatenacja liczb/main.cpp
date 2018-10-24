#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string concatenate(vector<long long>::iterator& it)
{
    string ret; int i;
    for(; *it; *it /= 10){
        ret.push_back((*it % 10) + '0');
    }
    string temp;
    for(i = ret.length() - 1; i >= 0; --i){
        temp.push_back(ret[i]);
    }
    return temp;
}
int main()
{
    int t, n, i;

    cin.tie(nullptr);
    cin >> t;
    while(t--){
        string number = "";
        cin >> n;
        vector<long long> tab(n, 0);
        for(i = 0; i < n; ++i)
            cin >> tab[i];

        sort(tab.begin(), tab.end());
        auto it = tab.end();
        for (--it; it != tab.begin(); --it)
            number += concatenate(it);
        --it;
        number += concatenate(it);
        cout << number << endl;

    }
    return 0;
}
