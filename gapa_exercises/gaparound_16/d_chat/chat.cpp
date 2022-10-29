#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long ll;

ll n,a,sum=0,k,cont=0;
std::vector<ll> arr,arr1;

int main() {
    cin>>n;
    rep(i,0,n){
    	cin>>a;
    	arr.pb(a);
    }
    if(n>1){
        sort(arr.rbegin(),arr.rend());
        arr1.pb(arr[0]);
        k=n-2;
        int i=1;
        while(k>0){
            if(cont<2){
                arr1.pb(arr[i]);
                cont++;
                k--;
            }
            else{
                i++;
                cont=0;
            }
        }
        for(int j=0;j<arr1.size();j++){
            sum+=arr1[j];
        }
        cout<<sum<<'\n';
    }
    else {
    	cout<<0<<'\n';
    }
    return 0;
}