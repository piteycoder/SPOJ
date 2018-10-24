#include <iostream>
#include <map>
#include <string>
#include <cctype>

using namespace std;

bool checkT9(string first, string second, map <char, char> &t9);
int main()
{
    map <char, char> t9;
    t9['a'] = t9['b'] = t9['c'] = t9['2'] = '2';
    t9['1'] = '1';
    t9['d'] = t9['e'] = t9['f'] = t9['3'] = '3';
    t9['g'] = t9['h'] = t9['i'] = t9['4'] = '4';
    t9['j'] = t9['k'] = t9['l'] = t9['5'] = '5';
    t9['m'] = t9['n'] = t9['o'] = t9['6'] = '6';
    t9['p'] = t9['q'] = t9['p'] = t9['r'] = t9['7'] = '7';
    t9['t'] = t9['u'] = t9['v'] = t9['8'] = '8';
    t9['w'] = t9['x'] = t9['x'] = t9['z'] = t9['9'] = '9';
    t9['0'] = '0';

    int t;
    (cin >> t).get();
    string first, second;
    while(t--){
        cin >> first >> second;
        if (checkT9(first, second, t9) == true)
            cout << "TAK - " << first << endl;
        else
            cout << "NIE" << endl;
    }

    return 0;
}
bool checkT9(string first, string second, map <char, char> &t9)
{
    if (first.length() != second.length())
        return false;
    for (unsigned int i = 0; i < first.length(); i++){
        if (t9[tolower(first[i])] != second[i])
            return false;
    }
    return true;
}
