#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin>>n;
    ll sum =0;
    ll st; cin>>st;
    for (int i=1; i<n; i++) {
        ll a; cin>>a;
        if (a<st) {
            sum+=(st-a);
        }
        else {
            st = a;
        }
    }
    cout<<sum<<endl;
    return 0;
}