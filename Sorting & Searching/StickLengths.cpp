#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll q;
    cin >> q;
 
    multiset<ll> L, R;
    ll sumL = 0, sumR = 0;
 
 
    auto rebalance = [&]() {
 
        if (L.size() > R.size()) {
            auto it = prev(L.end());
            ll x = *it;
            L.erase(it);
            sumL -= x;
            R.insert(x);
            sumR += x;
        }
        else if (R.size() > L.size() + 1) {
            auto it = R.begin();
            ll x = *it;
            R.erase(it);
            sumR -= x;
            L.insert(x);
            sumL += x;
        }
    };
 
    while (q--) {
 
        ll x;
        cin >> x;
 
 
        if (R.empty() || x >= *R.begin()) {
            R.insert(x);
            sumR += x;
        } else {
            L.insert(x);
            sumL += x;
        }
        rebalance();
 
 
 
 
 
    }
    if (L.empty() && R.empty()) {
        cout << 0 << "\n";
 
    }
    else{
    ll med = *R.begin();
 
    ll cost = med * (ll)L.size() - sumL + sumR - med * (ll)R.size();
    cout << cost<< "\n";
    }
    return 0;
}
