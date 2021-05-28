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
int nums, m;
vec<int> ans;
void solve() {
	cin >> s >> nums;

	for (int i=0; i<nums; i++) {
		cin >> m;
		int binnum = 0;
		for (int j=sz(s)-1; j >= 0; j--) {
			int pow2 = pow(2, (sz(s)-1-j));
			binnum += (((s[j]-'0')%m)*(pow2%m)%m)%m;
		}
		if(!(binnum % m)) ans.pb(m);
	}
	if (sz(ans) != 0) {
		sort(all(ans));
		for(int i=0; i<sz(ans); i++) {
			cout << ans[i];
			if (i != sz(ans)-1) cout << ' ';
		}
	} else {
		cout << "Nenhum";
	}
	cout << '\n';
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	solve();

	return 0;
}