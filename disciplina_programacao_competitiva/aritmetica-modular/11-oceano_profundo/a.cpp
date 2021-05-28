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
const int M = 131071;

void solve() {
	while(getline(cin, s, '#')) {
		ll int n = 0;
		ll int pow2 = 1;
		for(int i=sz(s)-1; i>=0; i--) {
			n += (((s[i] - '0')%M)*(pow2%M))%M;
			pow2 = ((pow2%M) * 2)%M;
		}
		if(!n%M) cout << "YES";
		else cout << "NO";
		cout << '\n';
	}

};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	solve();

	return 0;
}
