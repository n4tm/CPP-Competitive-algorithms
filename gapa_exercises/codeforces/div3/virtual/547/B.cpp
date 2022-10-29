#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define uint unsigned int
#define vec vector
#define pb push_back
#define ins insert
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define len(s) (int)(s).length()
#define toupper(s) transform(all(s), s.begin(), ::toupper)
#define tolower(s) transform(all(s), s.begin(), ::toupper)
#define readvec(v) for(auto &x: v) cin >> x
#define MOD (int)(1e9+7)
uint factorial(uint n){uint ans=1,i;for(i=2;i<=n;i++)ans*=i;return ans;}

int bigger, cont, i;

void solve() {
    int n;
    cin >> n;
    vec<int> a(n); readvec(a);

    bool checked_start = false;
    while (!checked_start) {
        if (a[i%n]) cont++;
        else {
            if (cont > bigger) bigger = cont;
            if (i >= n) checked_start = true;
            if (cont != 0) cont = 0;
        }
        i++;
    }
    cout << bigger << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
    
    return 0;
}