#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string str;
    cin>>str;
    ll len = str.length();

    ll mxl =1;
    ll going =1;
    char last = str[0];
    /*
     *Here mxl is the maximum length till that index
     *going is the length of continuous appearance of that char around that index
     *last is the last char
     */
    for (ll i =1; i<len; i++) {
        if (str[i]==last) {
            going++;
        }
        else {
            mxl = max(mxl, going);
            going = 1;
            last = str[i];
        }
        if (i==len-1) { // this is just to check if last segment is the largest segment
            mxl = max(mxl, going);
        }
    }
    cout<<mxl<<endl;
    return 0;
}