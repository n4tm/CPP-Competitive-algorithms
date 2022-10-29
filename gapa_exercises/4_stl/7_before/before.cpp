#include <bits/stdc++.h>
using namespace std;

int d, st, mint, maxt, sec = 0, cont;
bool can = true;
vector<pair<int, int>> t;


int main () {
    cin >> d >> st;
    for (int i = 0; i < d; i++) {
        scanf("%d %d", &mint, &maxt);
        t.push_back(pair<int, int>(mint, maxt));
        sec += maxt;
    }

    if (sec < st) {
        can = false;
    }

    while (sec > st) {
        if (cont == d) {
            can = false;
            break;
        }
        cont = 0;
        for (int i = 0; i < d; i++) {
            if (t[i].first < t[i].second) {
                t[i].second--;
                sec--;
            } else {
                cont++;
            }
            if (sec == st) {
                break;
            }
        }
    }
   
    if (can) {
        printf("YES\n");
        for (auto x : t) {
            printf("%d ", x.second);
        }
    } else printf("NO\n");
    
    

    return 0;
}