#include <iostream>
#include <string>

using namespace std;

int count(int ques, int rem, int first)
{
    if (ques == 1)
        return rem < 1 && !first ? 4 : 3;
    return count(ques - 1, rem, 0) * (first ? 3 : 4) + count(ques-1, (rem+2)%3, 0)*3 + count(ques-1, (rem+1)%3, 0)*3;
}
int main()
{
    string in;
    int len = in.length(), ques{0}, sum{0}, tab[2][3][11];
    cin.tie(nullptr);
    ios_base::sync_with_stdio(0);

    while(cin >> in){
        for(int i{0}; i < len; ++i){
            ques += in[i] == '?';
            sum += in[i] == '?' ? 0 : in[i] - '0';
        }
        if(!ques){
            if(sum%3 == 0)
                cout << sum << "\n";}
        else if(ques == 1 && len < 2)
                cout << 4 << "\n";
        else if(tab[in[0] == '?'][sum%3][ques])
                cout << tab[in[0] == '?'][sum%3][ques] << "\n";
        else{
                tab[in[0] == '?'][sum%3][ques] = count(ques, sum%3 < 1 ? 0 : 3-sum%3, in[0] == '?'),
                cout << tab[in[0] == '?'][sum%3][ques] << "\n";}
    }
    return 0;
}
