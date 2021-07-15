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
#define MOD (int)(1e9+7)
#define readintvec(v) for(int &x: v) scanf("%d", &x)
int inv_mod(int a, int b){return(a>1?b-inv_mod(b%a,a)*b/a:1);}
unsigned int factorial(unsigned int n){int ans=1,i;for(i=2;i<=n;i++)ans*=i;return ans;}
 
int n, m, k;
int ans;

void solve() {
	scanf("%d %d %d", &n, &m, &k);
	vector<int> desired(n); readintvec(desired);
	vector<int> available(m); readintvec(available);
	sort(all(desired));
	sort(all(available));
	for (int i = 0, j=0; i<n; i++) {
		while(j<m && available[j] < desired[i] - k) j++;
		if (j==m) continue;
		if (available[j] <= desired[i] + k) {
			ans++;
			j++;
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