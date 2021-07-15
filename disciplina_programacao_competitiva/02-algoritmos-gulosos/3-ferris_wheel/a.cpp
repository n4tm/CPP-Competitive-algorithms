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
 
struct classcomp {
	bool operator() (const int& lhs, const int& rhs) const {return lhs>rhs;}
};
 
int n, x, p[210101];
int gondolas;

 
void solve() {
	scanf("%d %d", &n, &x);
	for (int i = 0; i < n; i++) {
		scanf("%d", p+i);
	}
	sort(p, p+n);
	for (int i=0, j=n-1; i<=j; gondolas++) {
		int dif = x-p[j];
		if (p[i] <= dif && dif > 0) {
			i++;
		}
		j--;
	}
	printf("%d\n", gondolas);
 
};
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
 
 
	solve();
 
	return 0;
}