#include<bits/stdc++.h>
using namespace std;
 
#define ff first
#define ss second
#define PI acos(-1)
#define pb push_back
#define int long long
#define ld long double
#define sp fixed<<setprecision
#define bp __builtin_popcountll
#define all(x) x.begin(),x.end()
#define pii pair<long long,long long>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
const int M = (1e9)+7;
const int N = 1e6+5;
 
signed main()
{
    FAST
    int tc=1;
    for(int ti=1;ti<=tc;ti++)
    {
        int n,k,zeros=0;
        cin>>n>>k;
        multiset<int> pos,neg;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x > 0)pos.insert(x);
            else if(x < 0)neg.insert(-x);
            else zeros++;
        }
        multiset<int> now,pos_taken,neg_taken;
        while(now.size() < k)
        {
            if(!pos.size() && !neg.size())break;
            int op1 = pos.size() ? *pos.rbegin() : 0;
            int op2 = neg.size() ? *neg.rbegin() : 0;
            if(op1 >= op2)pos.erase(pos.find(op1)),pos_taken.insert(op1);
            else if(op1 < op2)neg.erase(neg.find(op2)),neg_taken.insert(op2);
            now.insert(max(op1,op2));
        }
        if(now.size() < k)return cout<<0,0;
 
        int neg_flag = 0;
        if(neg_taken.size() % 2)
        {
            int op1 = (neg_taken.size() && pos.size());
            int op2 = (pos_taken.size() && neg.size());
            int ok = (op1 || op2);
 
            if(ok)
            {
                if(op1 && !op2)
                {
                    now.erase(now.find(*neg_taken.begin()));
                    now.insert(*pos.rbegin());
                }
                else if(!op1 && op2)
                {
                    now.erase(now.find(*pos_taken.begin()));
                    now.insert(*neg.rbegin());
                }
                else
                {
                    int chk = ( (*pos.rbegin())*(*pos_taken.begin()) >= (*neg.rbegin())*(*neg_taken.begin()) );
                    if(chk)
                    {
                        now.erase(now.find(*neg_taken.begin()));
                        now.insert(*pos.rbegin());
                    }
                    else
                    {
                        now.erase(now.find(*pos_taken.begin()));
                        now.insert(*neg.rbegin());
                    }
                }
            }
            else
            {
                if(zeros)
                {
                    now.erase(now.begin());
                    now.insert(0);
                }
                else
                {
                    multiset<int> sab;
                    for(int i:neg_taken)sab.insert(i);
                    for(int i:pos_taken)sab.insert(i);
                    for(int i:neg)sab.insert(i);
                    for(int i:pos)sab.insert(i);
                    now.clear();
                    for(int i=0;i<k;i++)now.insert(*sab.begin()),sab.erase(sab.begin());
                    neg_flag = 1;
                }
            }
        }
        int ans = 1;
        for(int i:now)ans *= i,ans %= M;
        if(neg_flag)ans *= -1;
        ans += M; ans %= M;
        cout<<ans<<endl;
    }
    return 0;
}