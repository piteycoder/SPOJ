#include <iostream>
#include <cmath>

using namespace std;


struct Cat
{
    unsigned age;
    int place;
};
int main()
{
    unsigned t{0};
    cin >> t;

    Cat cat1, cat2;
    while(t--){
        cin >> cat1.age >> cat1.place >> cat2.age >> cat2.place;
        if (cat1.age > cat2.age){
            if(abs(cat1.place - cat2.place) % 3 == 1)
                cout << 0 << endl;
            else
                cout << 1 << endl;
        }
        else{
            if(abs(cat1.place - cat2.place) % 3 != 1)
                cout << 0 << endl;
            else
                cout << 1 << endl;
        }
    }
    return 0;
}
