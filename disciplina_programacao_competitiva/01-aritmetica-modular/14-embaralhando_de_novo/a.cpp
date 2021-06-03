#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array
#define vec vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define MOD (int)(1e8+7)
int inv_mod(ll int a, ll int b){return a > 1 ? b-inv_mod(b%a, a)*b/a : 1;};

int factorial(ll int num) {
	if(num > 1) return ((num%MOD)*(factorial(num-1))%MOD)%MOD;
	else return 1;
}

string s;
vec<int> v;

void solve() {
	while(cin >> s) {
		if (s == "0") break;
		ll int rep = 0;
		ll int p = factorial(sz(s));
		sort(s.begin(), s.end());
		for(ll int i = 1; i < sz(s)+1; i++) {
			if ((s[i-1] == s[i]) && (rep == 0)) rep+=2;
			else if ((s[i-1] == s[i]) && (rep!=0)) rep+=1;
			else if (rep!=0) {
				v.pb(factorial(rep));
				rep = 0;
			}
		}

		for (ll int i=0; i < sz(v); i++) {
			p = ((p%MOD) * (inv_mod(v[i], MOD)))%MOD;
		}
		cout << p%MOD << '\n';
		v.clear();
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	solve();

	return 0;
}