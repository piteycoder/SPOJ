#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <array>

using namespace std;
const int mil{1000000};
const int thousand{1000};

int main()
{
    unsigned tests{0};
    cin >> tests;

    array <unsigned, mil + 1> numbers;
    set <unsigned> firstNumbers;
    for (int i{0}; i < numbers.size(); ++i)
        numbers[i] = i;

    for (int i{2}; i <= thousand; ++i){
        bool goNext{0};
        for (auto iter{firstNumbers.begin()}; iter != firstNumbers.end(); ++iter){
                if (i % *iter == 0){
                    goNext = true;
                    break;
                }
            }
            if (goNext)
                continue;

            for (int j{i * 2}; j <= mil; j += i){
                numbers[j] = 0;
            }
    }

    for (unsigned i{2}; i <= mil; ++i){
        if (numbers[i])
            firstNumbers.insert(i);
    }

    while(tests--){
        unsigned L{0}, U{0};

        cin >> L >> U;

        vector <unsigned> spectrum;
        for (int i{L}; i <= U; ++i)
            spectrum.push_back(i);
        set <unsigned> result;

        unsigned loops{sqrt(U - L)};
        for (unsigned i{2}; i <= loops; ++i){
            bool goNext{0};
            for (auto iter{firstNumbers.begin()}; iter != firstNumbers.end(); ++iter){
                if (L % *iter == 0){
                    goNext = true;
                    break;
                }
            }
            if (goNext){
                for ()
            }
        }
    }
    return 0;
}
