#include <cstdio>
#include <list>

using namespace std;

inline void readUI(int *n)
{
    register char c = 0;
    while (c < 33) c=getc_unlocked(stdin);
    (*n) = 0;
    while (c>32) {(*n)=(*n)*10LL + (c-48); c=getc_unlocked(stdin);}
}
int main()
{
    unsigned t{0};
    readUI(&t);

    list<int> result;
    unsigned long long n{0};
    int k;
    while(t--){
        k = 9;
        readUI(&n);
        if (n < 10){
            if (n == 0)
                printf("%d",10);
            else
                printf("%d",n);
        }
        else{
            while(k > 1 && n > 1){
                while (n % k == 0){
                    result.push_front(k);
                    n /= k;
                }
                --k;
            }
            if (n > 1)
                printf()
            else{
                for(auto iter = result.begin(); iter != result.end(); ++iter)
                    cout << *iter << flush;
                    cout << endl;
            }
        }
        result.clear();
    }
    return 0;
}
