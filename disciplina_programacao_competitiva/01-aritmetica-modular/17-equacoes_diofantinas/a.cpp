#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array
#define vec vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define MOD (int)(1e9+7)
int inv_mod(int a, int b){return (a > 1 ? b-inv_mod(b%a, a)*b/a : 1);}

const int M = 1300031;
ll int t, n, c;
void solve() {
	cin >> t;
	for (int i=0; i<t; i++) {
		cin >> n >> c;
		
		ll int aux = 1;
		ll int ans = 1;
		for(int i=0; i<n-1;i++) {
			ans += c;
			c++;
		}
		cout << ans << '\n';
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	solve();

	return 0;
}