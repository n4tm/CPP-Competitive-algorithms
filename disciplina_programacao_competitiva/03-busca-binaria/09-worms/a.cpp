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

int search_pile(vector<int> &v, int x) {

}

void solve() {
	int n, m, qi, sum=1;
	scanf("%d", &n);
	vector<int> piles;
	vector<int> v(n); readintvec(v);
	for (int i = 0; i < n; i++) {
		piles.pb(sum);
		sum += v[i];
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &qi);
		printf("%d\n", upper_bound(all(piles), qi) - piles.begin());
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	solve();

	return 0;
}