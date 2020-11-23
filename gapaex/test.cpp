#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int, int> ii;
#define SORT(x, d) if(d == 1)sort((x).begin(), (x).end()); else if(d == -1)sort((x).rbegin(), (x).rend())
#define mp make_pair
#define oo 1e+9
#define sz(a) int((a).size())
#define pb push_back
#define fs first
#define sc second
#define N 1100100100

int l, c, r1, r2, x_1, x_2, y_1, y_2;
int big, small;
double cdist;
int main () {
    cin >> l >> c >> r1 >> r2;
    while (l != 0 || c != 0 || r1 != 0 || r2 != 0) {
        char ans = 'N';
        if (r1 >= r2) big = r1;
        else big = r2;
        if (l <= c) small = l;
        else small = c;
        x_1 = l-r1;
        x_2 = r2;
        y_1 = r1;
        y_2 = c-r2;
        cdist = sqrt(pow(float(x_1-x_2), 2) + pow(float(y_1-y_2), 2));
        if ((big <= small) && cdist >= r1+r2) ans = 'S';
        if (2*r1 > l || 2*r1 > c || 2*r2 > l || 2*r2 > c) ans = 'N';
        cout << ans << '\n';
        cin >> l >> c >> r1 >> r2;
    }

    return 0;
}