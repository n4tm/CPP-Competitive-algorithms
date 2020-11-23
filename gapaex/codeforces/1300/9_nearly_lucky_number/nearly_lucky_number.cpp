#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mp make_pair
#define pb push_back
#define oo 1e+9
#define debug(var) cerr << #var << " = " << var << endl;
#define N 11001001

string s, ans = "YES";
int cont;
bool is_lucky_num(string s) {
    for (char x: s) {
        if (x != '4' && x != '7') return false;
    }
    return true;
}

signed main () {
    ios_base::sync_with_stdio(0);
    cin >> s;
    for (char x: s) {
        if (x == '7' || x == '4') cont++;
    }
    if(!is_lucky_num(to_string(cont))) ans = "NO";
    cout << ans << '\n';

    return 0;
}