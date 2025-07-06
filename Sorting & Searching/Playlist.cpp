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
    map<ll, int> last;
    int mx =0;
    int cont=0;
 
    for (int i=n-1; i>=0; i--) {
        if (last.find(values[i])==last.end()) {
            cont++;
            mx= max(cont, mx);
            last[values[i]] = i;
        }
        else {
            if (last[values[i]]-i <= cont) {
                cont = last[values[i]]-i;
            }
            else {
                cont++; mx= max(cont, mx);
            }
            last[values[i]]=i;
        }
    }
    cout<<mx;
    return 0;
}
