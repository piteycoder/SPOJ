#include <iostream>
#include <vector>

using namespace std;

void fillVector(vector < vector <int> > &cards, int vectorSize);
int main()
{
    int tests, amount;
    vector < vector <int> > cards;
    cin >> tests;
    while(tests--){
        cin >> amount;
        fillVector(cards, amount);

        for (int i = 0; i < cards.size(); i++){
            for (int k = 0; k < cards[i].size(); k++){
                cout << cards[i][k] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
void fillVector(vector < vector <int> > &cards, int vectorSize)
{
    vector <int> temp(vectorSize/2);
    vector <int> send(vectorSize/2);

    for (int i = 1; i <= vectorSize; i += 2){
        temp.push_back(i);
        send.push_back(i - 1);
    }

    cards.push_back(temp);
    if (send.size() > 0)
        fillVector(cards, send.size());
}
