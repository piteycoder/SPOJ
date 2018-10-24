#include <iostream>

using namespace std;

int timeToInt (const char *time);
int main()
{
    int t;
    cin >> t;
    int meters;
    char time[8];
    int tempo_s;
    double s, m;

    while(t--){
        (cin >> meters).get();
        cin >> time;
        tempo_s = meters / timeToInt(time);
        s = tempo_s % 60;
    }
    return 0;
}
int timeToInt (const char *time)
{
    int seconds;
    seconds = time[7] - '0';
    seconds += (time[6] - '0') * 10;

    seconds += (time[4] - '0') * 60;
    seconds += (time[3] - '0') * 600;

    seconds += (time[1] - '0') * 3600;
    seconds += (time[0] - '0') * 36000;

    return seconds;
}
