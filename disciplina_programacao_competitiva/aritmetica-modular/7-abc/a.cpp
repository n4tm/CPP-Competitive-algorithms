#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array
#define vec vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define MOD (int) 1e9+7
int inv_mod(int a, int b){return a > 1 ? b-inv_mod(b%a, a)*b/a : 1;};

string s;

void solve() {
	while(cin >> s) {
		int n = 0;
		for (int i=0; i < s.size(); i++) {
			n = 10*n + s[i] - 'A';
		}
		cout << 60160%MOD << '\n';

	}

};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	solve();

	return 0;
}