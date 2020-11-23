#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mp make_pair
#define pb push_back
#define oo 1e+9
#define debug(var) cerr << #var << " = " << var << endl;
#define N 11001001

string s;
int contl, contu;

signed main () {
    ios_base::sync_with_stdio(0);
    cin >> s;
    for (char x: s) {
        if (x == tolower(x)) contl++;
        else contu++;
    }
    if (contl >= contu) transform(s.begin(), s.end(), s.begin(), [](unsigned char c){ return tolower(c);});
    else transform(s.begin(), s.end(), s.begin(), [](unsigned char c){ return toupper(c);});
    cout << s << '\n';
    return 0;
}