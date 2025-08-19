#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<bool> rem(n+1, true);
    int rema = n;
    int i=2;
    bool lenahai = true;
    while(rema>0){
        if(i>n){i=1; }
        if(rem[i]){
            if(lenahai){
                cout<<i<<" ";
                rema--;
                lenahai =false;
                rem[i]=false;
            }
            else{
                lenahai= true;
            }
        }
        i++;
    }
    return 0;
}
