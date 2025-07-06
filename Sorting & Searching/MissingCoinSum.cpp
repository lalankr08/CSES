#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<ll> values(n);
    for (int i = 0; i < n; i++) {
        cin>>values[i];
    }
    sort(values.begin(), values.end());
 
    ll res = 1;
    if (values[0]!=1) {
        cout<<1<<endl;
        return 0;
    }
 
    for (ll value: values) {
        if (res<value) { break; }
        res+=value;
    }
 
    cout<<res;
    return 0;
}
