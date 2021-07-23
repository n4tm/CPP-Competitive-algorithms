#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array
#define vec vector
#define pb push_back
#define ins insert
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define readintvec(v) for(int &x: v) scanf("%d", &x)
#define MOD (int)(1e9+7)
int inv_mod(int a, int b){return(a>1?b-inv_mod(b%a,a)*b/a:1);}
unsigned int factorial(unsigned int n){int ans=1,i;for(i=2;i<=n;i++)ans*=i;return ans;}

int b_search(vector<int> &v, int x) {
	int l = 0, r = sz(v), m;
	while (l < r) {
		m = l + (r-l)/2;
		if (v[m] > x) r = m;
		else l = m+1;
	}
	return r;
}

void solve() {
	int n, k, q;
	scanf("%d %d", &n, &k);
	vector<int> v(n); for (int &x: v) scanf("%d", &x);
	for (int i = 0; i < k; i++) {
		scanf("%d", &q);
		printf("%d\n", b_search(v, q));
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	solve();

	return 0;
}