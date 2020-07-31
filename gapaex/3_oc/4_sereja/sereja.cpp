#include <iostream>
#include <deque>

using namespace std;
typedef unsigned int ui;

ui n = 0, aux = 0, dpoints = 0, spoints = 0, turn = 0;
deque<ui> cards;

int main () {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        cards.push_back(aux);
        if (i == n-1) {
            while (cards.size() != 0) {
                if (*(cards.end()-1) > *(cards.begin())) {
                    if (turn % 2 == 0) {
                        spoints += *(cards.end()-1);
                    } else {
                        dpoints += *(cards.end()-1);
                    }
                    cards.pop_back();
                } else {
                    if (turn % 2 == 0) {
                        spoints += *(cards.begin());
                    } else {
                        dpoints += *(cards.begin());
                    }
                    cards.pop_front();
                }
                turn++;
            }
            cout << spoints << ' ' << dpoints << '\n';
        }
    }

    return 0;
}