#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array
#define vec vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define MOD 1e9+7
int inv_mod(int a, int b){return a > 1 ? b-inv_mod(b%a, a)*b/a : 1;};

ll int n, m, k, aux;


void solve() {
	cin >> n >> m >>k;
	while(n || m || k) {
		ll int v[101010];
		for (ll int i=1; i<=n; i++) {
			scanf("%lld", &aux);
			v[i] = aux;
		}
		if (!(m%k)) printf("%lld\n", v[4]);
		else printf("%lld\n", v[(n+k-(m%(n+2*k)))%n]);
		cin >> n >> m >> k;
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	solve();

	return 0;
}