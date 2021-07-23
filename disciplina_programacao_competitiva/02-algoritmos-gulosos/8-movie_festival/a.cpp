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

int n, scanaux1, scanaux2, ans=1;

bool cmp1(pair<ll int, ll int> p1, pair<ll int, ll int> p2) {
	return (p1.second < p2.second);
}

void solve() {
	scanf("%d", &n);
	vector<pair<ll int, ll int>> p(n); for (pair<ll int, ll int> &x: p) scanf("%lld %lld", &x.first, &x.second);
	sort(all(p), cmp1);
	ll int last = p[0].second;
	for (int i = 1; i < n; i++) {
		if (p[i].first >= last) {
			last = p[i].second;
			ans++;
		}
	}
	printf("%d\n", ans);

};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	solve();

	return 0;
}