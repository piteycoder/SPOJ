#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned t{0};
    cin >> t;

    while(t--){
        unsigned radius{0};
        cin >> radius;

        unsigned result{4*radius + 1};

        unsigned otherResult{0};
        for(int x = 1; x < radius; ++x){
            otherResult += sqrt(radius * radius - x*x);
        }
        cout << result + 4 * otherResult << endl;
    }
    return 0;
}
