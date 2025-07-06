#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {
    int t;
    cin>>t;
    while(t--) {
        ll a, b;
        cin>>a>>b;
        if (a==b && a%3==0) {
            cout<<"YES"<<endl;
        }
        else if (a==b && a%3!=0) {
            cout<<"NO"<<endl;
        }
        else if (max(a, b)>2*min(a,b)) {
            cout<<"NO"<<endl;
        }
        else {
            ll diff = abs(a-b);
            if ((min(a,b)-diff) % 3==0) {
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}
