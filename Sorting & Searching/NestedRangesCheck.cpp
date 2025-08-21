#include <bits/stdc++.h>
using namespace std;
using ll = long long; 
ll INF = 1e9 + 7; 

void write(vector<bool> v){
    for(int i=0; i<v.size(); i++){
        cout << (v[i] ? 1 : 0) << " "; 
    }
    cout << endl; 
}

int main() {
    int n; 
    cin >> n; 
    vector<tuple<ll, ll, int>> x;
    for(int i = 0; i < n; i++){
        ll a, b; 
        cin >> a >> b; 
        x.push_back({a, b, i});
    }

    sort(x.begin(), x.end()); 

    ll last = 0; 
    vector<bool> ans1(n, false); 
    vector<bool> ans2(n, false); 

    // Left-to-right pass
    for(int i = 0; i < n; i++){
        ll temp = get<1>(x[i]); 
        
        if(temp <= last){
            ans1[get<2>(x[i])] = true; 
        } else {
            last = temp; 
        }

        if(i >= 1 && get<0>(x[i]) == get<0>(x[i-1])){
            ans1[get<2>(x[i-1])] = true; 
        }
    }

    // Right-to-left pass
    last = get<1>(x[n-1]); 
    for(int i = n - 2; i >= 0; i--){
        ll temp = get<1>(x[i]); 
        
        if(temp >= last){
            ans2[get<2>(x[i])] = true; 
        } else {
            last = temp; 
        }

        
        if(get<0>(x[i]) == get<0>(x[i+1])){
            ans2[get<2>(x[i+1])] = true; 
        }
    }

    write(ans2); 
    write(ans1); 

    return 0; 
}
