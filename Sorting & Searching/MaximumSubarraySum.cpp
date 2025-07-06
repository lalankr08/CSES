#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    int n;
    cin>>n;
    ll a; cin>>a;
    ll mn=min(a, 0LL);
    ll sum =a;
    ll ans=a;
    for (int i = 1; i < n; i++) {
        ll b; cin>>b;
        sum+=b;
 
        ans = max(ans, sum-mn);
        mn = min(mn, sum);
 
 
    }
    cout<<ans<<endl;
    return 0;
}
