#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin>>n;
    while (n!=1){
        cout<<n<<" ";
        if (n%2==0) n=n/2;
        else n=3*n+1;
    }
    cout<<1;
    return 0;
}