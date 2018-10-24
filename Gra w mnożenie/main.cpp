#include <iostream>

using namespace std;

const int t{2};
const int n{9};
int main()
{
    unsigned number{0};
    while(cin >> number){
        unsigned i{1};
        while(true){
            i *= n;
            if (i >= number){
                cout << "A" << endl;
                break;
            }
            i *= t;
            if (i >= number){
                cout << "B" << endl;
                break;
            }
        }
    }
    return 0;
}
