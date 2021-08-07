#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mp make_pair
#define pb push_back
#define oo 1e+9
#define debug(var) cerr << #var << " = " << var << endl;
#define N 11001001
 
string s1, s2, ans;
 
signed main () {
    ios_base::sync_with_stdio(0);
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] == s2[i]) ans += "0";
        else ans += "1";
    }
    cout << ans << '\n';
 
    return 0;
}