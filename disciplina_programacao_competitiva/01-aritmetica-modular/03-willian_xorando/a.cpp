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

int n, m, k, s[1007];

void w_xor() {
	for(int i=0; i<n; i++) {
		s[i] = 
	}
};

void solve() {
	cin >> n >> m >> k;
	while(n||m||k) {
		for (int i=0; i<n; i++) {
			cin >> s[i];
		}
		for (int i=0; i<m; i++) {
			w_xor();
		}
		cout << s[k+1] << '\n';
		cin >> n >> m >> k;
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	solve();

	return 0;
}