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

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	while(cin >> n) {
		int ans = 1, val = 1;
		while (val) {
			val = (val*10 + 1)%n;
			ans++;
		}
		cout << ans << endl;
	}


	return 0;
}