#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mp make_pair
#define pb push_back
#define oo 1e+9
#define debug(var) cerr << #var << " = " << var << endl;
#define N 11001001

int n;
string s;

signed main () {
    ios_base::sync_with_stdio(0);
    cin >> n >> s;
    for (int i = 1; i < s.length(); i++) {
        if(s[i] == s[i-1]) {
            s.erase(s.begin()+i-1);
            i--;
        }
    }
    cout << n-s.length() << '\n';

    return 0;
}