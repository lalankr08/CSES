#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n; cin>>n;
    vector<bool> v(n+1, false);
    for (int i=0; i<n-1; i++) {
        int a; cin>>a;
        v[a] = true;
    }
    for (int i=1; i<n+1; i++) {
        if (!v[i]) {
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}