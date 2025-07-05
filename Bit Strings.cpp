#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll MOD = 1000000007;

ll power(ll n) {
    ll res = 1;
    while (n) {
        res = res*2;
        res = res % MOD;
        n--;
    }
    return res;
}

int main() {
    ll n;
    cin>>n;
    cout<<power(n);

    return 0;
}
