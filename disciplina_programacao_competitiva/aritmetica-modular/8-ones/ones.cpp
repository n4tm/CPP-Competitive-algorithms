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

int m;

void solve() {
	while(cin >> m) {
		int n = 1;
		string s = "";
		while (n%m) {
			s += "1";
			for (int i=0; i < s.size(); i++) {
				int pow10 = (10%m*n%m)%m;
				n = (pow10%m + (s[i] - '0')%m)%m;
			}
		}
		cout << s.size() << '\n';
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	solve();

	return 0;
}