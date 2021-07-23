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

int n, scanaux1, scanaux2, num;

int l_b_search(vector<int> &v, int x) {
	int l = 0, r = sz(v), m;
	while (l < r) {
		m = l + (r-l)/2;
		if (v[m] < x) l = m+1;
		else r = m;
	}
	if (l >= sz(v) || l < 0) return sz(v);
	if (v[l] != x) return sz(v);
	return l;
}

int r_b_search(vector<int> &v, int x) {
	int l = 0, r = sz(v), m;
	while (l < r) {
		m = l + (r-l)/2;
		if (v[m] > x) r = m;
		else l = m+1;
	}
	if (r-1 >= sz(v) || r < 1) return -1;
	if (v[r-1] != x) return -1;
	return r-1;
}

void solve() {
	vector<int> v;
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &scanaux1, &scanaux2);
		for (int j = scanaux1; j <= scanaux2; j++) v.pb(j);
	}
	sort(all(v));
	scanf("%d", &num);
	int l_result = l_b_search(v, num);
	int r_result = r_b_search(v, num);
	if (l_result == sz(v) || r_result == -1) printf("%d not found\n", num);
	else printf("%d found from %d to %d\n", num, l_result, r_result);
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	while(scanf("%d", &n) != EOF) solve();

	return 0;
}