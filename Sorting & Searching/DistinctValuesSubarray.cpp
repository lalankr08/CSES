#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll calc(int n) {
    ll res = n*(n-1);
    return res/2;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<ll> values(n);
    for (int i = 0; i < n; i++) {
        cin>>values[i];
    }
    map<ll, int> last;
    int cont=0;
    ll sum =0;
    for (int i=n-1; i>=0; i--) {
        if (last.find(values[i])==last.end()) {
            cont++;
            sum+=cont;
            last[values[i]] = i;
        }
        else {
            if (last[values[i]]-i <= cont) {

                cont = last[values[i]]-i;
                sum+=cont;
            }
            else {
                cont++;
                sum+=cont;
            }
            last[values[i]]=i;
        }
    }
    cout<<sum;
    return 0;
}
