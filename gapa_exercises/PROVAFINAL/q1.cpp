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
#define N 11001001

int n, k, ans;
int qtime, ttime;

int main () {
    ios_base::sync_with_stdio(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        qtime += (i*5);
    }
    ttime = qtime + k;
    int i = n;
    ans = n;
    while (ttime > 240) {
        ttime -= i*5;
        i--;
        ans--;
    }
    

    cout << ans << '\n';
    return 0;
}