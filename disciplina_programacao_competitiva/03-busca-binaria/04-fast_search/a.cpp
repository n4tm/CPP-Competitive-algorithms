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

int l_b_search(vector<int> &v, int l) {
	int lo=0, ho=sz(v), m;
	while (lo < ho) {
		m = lo + (ho - lo)/2;
		if (v[m] < l) lo = m+1;
		else ho = m;
	}
	return lo;
}
int r_b_search(vector<int> &v, int r) {
	int lo=0, ho=sz(v), m;
	while (lo < ho) {
		m = lo + (ho - lo)/2;
		if (v[m] > r) ho = m;
		else lo = m+1;
	}
	return ho;
}

void solve() {
	int n, k, l, r;
	scanf("%d", &n);
	vector<int> v(n); readintvec(v);
	sort(all(v));
	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		scanf("%d %d", &l, &r);
		int ans = r_b_search(v, r) - l_b_search(v, l);
		if (i != k-1) printf("%d ", ans);
		else printf("%d\n", ans);
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	solve();

	return 0;
}