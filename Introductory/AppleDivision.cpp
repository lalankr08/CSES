#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll diff(ll i, ll l, ll r, ll n, vector<ll> v) {
    if (i>=n) {
        return abs(r-l);
    }
    return min(diff(i+1, l+v[i], r, n, v), diff(i+1, l, r+v[i], n, v));
}

int main() {
    int n;
    cin>>n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    cout<<diff(0LL, 0LL, 0LL, n, v)<<"\n";

    return 0;
}