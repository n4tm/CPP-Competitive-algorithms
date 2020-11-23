#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int, int> ii;
#define SORT(x, d) if(d == 1)sort((x).begin(), (x).end()); else if(d == -1)sort((x).rbegin(), (x).rend())
#define oo 1e+9
#define sz(a) int((a).size())
#define pb push_back
#define fs first
#define sc second
#define N 1100100100

string s, ans;
int n, m;

int main () {
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        m = (s.size()/2)-1;
        ans.insert(s.end()-1, s.rbegin()-1, s.rend()+m);
        cout << ans << '\n';
    }

    return 0;
}