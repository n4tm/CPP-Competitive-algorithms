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

string s;

const int nums[] = {4, 9, 25};
char ans = 'S';
void solve() {
	cin >> s;
	for (int i=0; i<3; i++) {
		int n = 0;
		int m = nums[i];
		for (int j=0; j<s.size(); j++) {
			int pow10 = ((10%m)*(n%m))%m;
			n = (pow10%m + (s[j]-'0')%m)%m;
		}
		if (n%m != 0) ans = 'N';
		else ans = 'S';
		cout << ans << '\n';
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	solve();

	return 0;
}