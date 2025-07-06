#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll MOD = 1000000007;

vector<ll> coins;
vector<ll> dp;

ll calc(ll n) {
    if (dp[n] != -1) return dp[n];
    if (n<coins[0]){return MOD; }
    if (n == 0) return dp[0] = 0;
    auto it = lower_bound(coins.begin(), coins.end(), n);
    int lim;
    if (it != coins.end())
        lim = it - coins.begin();
    else
        lim = coins.size();

    ll ans = MOD;
    for (int i = lim - 1; i >= 0; --i)
        ans = min(ans, 1 + calc(n - coins[i]));
    return dp[n] = ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    ll x;
    cin>>x;
    coins.resize(n);
    dp.assign(x+1, -1);
    for (int i=0; i<n; i++) {
        cin>>coins[i];
        if (coins[i]<=x){dp[coins[i]]=1;}
    }
    sort(coins.begin(), coins.end());
    ll ans = calc(x);
    cout << (ans >= MOD ? -1 : ans);
    return 0;
}
