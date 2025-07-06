#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    ll x; cin >> x;

    vector<ll> weight(n);
    for (int i = 0; i < n; i++) {
        cin >> weight[i];
    }
    sort(weight.begin(), weight.end());

    ll sum = 0;
    int l = 0, r = n - 1;
    while (l <= r) {
        if (l == r) {
            sum++;
            break;
        }
        if (weight[l] + weight[r] <= x) {
            l++;
            r--;
        } else {
            r--;
        }
        sum++;
    }

    cout << sum;
    return 0;
}
