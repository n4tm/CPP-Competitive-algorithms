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
int inv_mod(int a, int b){return a > 1 ? b-inv_mod(b%a, a)*b/a : 1;};

string s;
vector<int> v;


int factorial(int num) {
	if(num > 1) return (num%MOD*factorial(num-1)%MOD)%MOD;
	else return 1;
}

void solve() {
	while(cin >> s) {
		if (s == "0") break;
		int rep = 0;
		int total_rep = 1;
		sort(s.begin(), s.end());
		for(int i = 1; i < sz(s); i++) {
			if (s[i-1] == s[i]) rep+=2;
			if (rep!=0) {
				v.pb(rep);
				rep = 0;
			}
		}
		for (int i=0; i < sz(v); i++) {
			total_rep = ((total_rep%MOD) * (factorial(v[i]))%MOD)%MOD;
		}
		if (total_rep != 0) cout << (factorial(sz(s))%MOD*inv_mod(total_rep, MOD)%MOD)%MOD;
		else cout << factorial(sz(s))%MOD;
		cout << '\n';
		v.clear();
	}

};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	solve();

	return 0;
}