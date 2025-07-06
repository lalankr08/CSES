#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll MOD = 1000000007;

vector<ll> dp;

ll calc(ll n) {
    if (dp[n]!=0) return dp[n];
    ll sum =0;
    for (int i=1; i<=min(6LL,n);  i++){
        sum+=calc(n-i);
    }
    dp[n]= sum%MOD;
    return dp[n];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    dp.assign(n+1, 0);
    dp[0]=1;
    dp[1]=1;
    dp[2]= 2;
    ll ans = calc(n);
    cout<<ans<<endl;
    return 0;
}
