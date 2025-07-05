#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {
    int t; cin>>t;
    while(t--){
        ll y, x; cin>>y>>x;
        if (y>=x) {
            if (y%2==0) {
                ll ans = y * y;
                cout<<ans+1-x<<endl;
            }
            else {
                y = y-1;
                ll ans = y * y;
                ans++;
                cout<<ans-1+x<<endl;
            }
        }
        else {
            if (x%2==0) {
                x--;
                ll ans = x * x;
                ans++;
                cout<<ans-1+y<<endl;
            }
            else {
                ll ans = x * x;
                cout<<ans+1-y<<endl;
            }
        }
            // ll ans = max(x, y);
                // ans = ans * ans;
                    // ans = ans+1-min(x, y);
                        // cout<<ans<<endl;
    }
    return 0;
}
