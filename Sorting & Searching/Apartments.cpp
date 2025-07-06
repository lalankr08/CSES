#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin>>n>>m;
    ll k;
    cin>>k;
    vector<ll> desired(n);
    vector<ll> available(m);
    for (int i=0; i<n; i++) {
        cin>>desired[i];
    }
    for (int i=0; i<m; i++) {cin>>available[i];}
 
    //sort
    sort(desired.begin(), desired.end());
    sort(available.begin(), available.end());

 
    ll sum = 0;
    int j=0;
    for (int i=0; i<n; i++) {
        while (true) {
            if (j>=m) {break;}
            if (available[j]>(desired[i]+k)) {break;}
            if (available[j]<(desired[i]-k)) {j++; continue;}
            sum++;
            j++;
            break;
        }
    }
    cout<<sum;
    return 0;
}
