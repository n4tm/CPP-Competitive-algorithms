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

int t, n, k;
vector<int> ans[1010];

void solve() {
	scanf("%d", &t);
	// For each test case
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &n, &k);
		// For each number from 1 to n
		for (int j = 1; j <= n; j++) {
			for (int ji = 1; ji <= n; ji++) {
				if (j+ji == k) break;
				if (ji == n) ans[i].pb(j);
			}
		}
		int stsize = sz(ans[i]);
		printf("%d\n", stsize);
		for (int m = 0; m < stsize; m++) {
			if (m == stsize-1) printf("%d\n", ans[i][m]);
			else printf("%d ", ans[i][m]);
		}
		
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	solve();

	return 0;
}