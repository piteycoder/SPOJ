#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int tests{0};

    cin >> tests;
    while(tests--){
        int amount{0};
        long long sLeft{0}, sRight{0};

        cin >> amount;

        vector <long long> numbers(amount,0);
        for (vector<long long>::iterator iter = numbers.begin(); iter != numbers.end(); ++iter){
            cin >> *iter;
            sRight += *iter;
        }
        int i{0};
        for(; i < amount - 1; ++i){
            sLeft += numbers[i];
            sRight -= numbers[i];
            if (sLeft == sRight)
                break;
        }
        if(i == amount - 1)
            cout << 0 << endl;
        else
            cout << i + 1 << endl;

    }
    return 0;
}
