#include <bits/stdc++.h>
using namespace std;

string p, a;
char ans = 'N';

bool isanag() {
    sort(p.begin(), p.end());
    sort(a.begin(), a.end());
    int ast;
    if (a == p) return true;
    else {
        for(int i = 0; i < a.length(); i++) {
            if (a[i] == '*') {
                ast++;
            } else {
                break;
            }
        }
        for (int i = 0; i < p.length(); i++) {
            if (p[i] )
        }
        
    }

    return true;
}

int main () {
    cin >> p >> a;
    if(isanag()) {
        ans = 'S';
    }
    cout << ans << '\n';

    return 0;
}