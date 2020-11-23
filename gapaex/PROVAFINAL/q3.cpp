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
#define N 110011

int n, a, b, t[N];

int main () {
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
    auto l = t;
    auto r = t+n-1;
    while (l != r) {
        auto middle = (t + n/2);
        if (l == middle && l > 0) {
            a++;
        } else if (r == middle && r > 0) {
            b++;
        }
        if (*l < *r) {
            *r -= *l;
            *l = 0;
            a++;
            l++;
        } else if (*l > *r) {
            *l -= *r;
            *r = 0;
            b++;
            r--;
        } else {
            *l = 0;
            *r = 0;
            r--;
            a++;
            b++;
            l++;
            if (l == r) {
                b--;
            }
        }
    }
    if (n == 1) {
        a++;
    }
    cout << a << ' '<< b << '\n';

    return 0;
}