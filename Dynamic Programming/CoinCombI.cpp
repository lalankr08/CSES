#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll MOD = 1000000007;
vector<ll> v;
vector<ll> dp;

ll find(ll val)
{
    if (val < 0) return 0LL;
    if (val==0) return 1LL;
    if (dp[val]!=-1) return dp[val];
    ll ans =0;
    for (long long i : v)
    {
        if (i>val){break;}
        ans+=find(val-i);
    }
    dp[val]=ans%MOD;
    return dp[val];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; ll x;
    cin>>n>>x;
    v.resize(n);
    dp.assign(x+1, -1);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cout<<find(x)%MOD<<endl;

    return 0;
}
