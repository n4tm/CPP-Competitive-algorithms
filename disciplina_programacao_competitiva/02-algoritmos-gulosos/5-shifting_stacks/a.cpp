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

int t, n, scanaux;


void solve() {
	int cont = 0;
	scanf("%d", &n);
	vector<pair<int, int>> v(n); for (pair<int, int> &x : v) {scanf("%d", &x); x.second = cont++;}
	sort(all(v), greater<pair<int, int>>());
	for (int i = 0; i < n; i++) {
		if (v[i].second )
	}
};


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	scanf("%d", &t);
	for(int i = 0; i < t; i++) solve();


	return 0;
}