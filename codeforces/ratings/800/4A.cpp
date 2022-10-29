#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define vec vector
#define pb push_back
#define ins insert
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define len(s) (int)(s).length()
#define toupper(s) transform(all(s), s.begin(), ::toupper)
#define tolower(s) transform(all(s), s.begin(), ::tolower)
#define readvec(v) for(auto &x: v) cin >> x
#define MOD (int)(1e9+7)
inline int inv_mod(int a, int b){return(a>1?b-inv_mod(b%a,a)*b/a:1);}
inline int factorial(int n){int ans=1,i;for(i=2;i<=n;i++)ans*=i;return ans;}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;

  cout << ((n%2 || n < 4)? "NO" : "YES") << endl;
  
  return 0;
}