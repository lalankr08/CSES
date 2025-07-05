#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<ll> values(n);
    multiset<ll> top;
    cin>>values[0];
    top.insert(values[0]);

    for (int i = 1; i < n; i++) {

        cin>>values[i];
        if (values[i]>=*top.rbegin()) {
            top.insert(values[i]);
        }
        else {
            auto it = top.upper_bound(values[i]); top.erase(it);
            top.insert(values[i]);

        }

    }
    cout<<top.size()<<endl;


    return 0;
}
