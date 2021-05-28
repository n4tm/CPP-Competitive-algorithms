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

string s1, s2;
int n, aux;

void solve() {
	while(cin >> s1) {
		for (int i=0; i<s1.size(); i++) {
			s2 += to_string(s1[i] - 'A');
		}
		for (int i=0; i <s2.size(); i++) {
			int pow10 = (n%MOD*10%MOD)%MOD;
			n = (pow10%MOD + (s2[i] - '0')%MOD)%MOD;
		}
		cout << s2 << '\n';
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	solve();

	return 0;
}