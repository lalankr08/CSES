#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {
    string str;
    cin>>str;
    ll len = str.length();
    vector<int> v(27, 0);
    for(int i=0;i<len;i++) {
        v[str[i]-'A']++;
    }
    int mid = -1;
    string front = "";
    string back = "";
    int no;
    for(int i=0;i<26;i++) {
        if (v[i] != 0 && v[i]%2==0) {
            front.append(v[i]/2, 'A'+i);
            back.insert(0, v[i]/2, 'A'+i);
        }
        else if (v[i]%2!=0) {
            if (mid==-1) {
                mid = i;
                no = v[i];
            }
            else {
                cout<<"NO SOLUTION";
                return 0;
            }
        }
    }

    cout<<front;
    if (mid!=-1) {
        while (no--) cout<<static_cast<char>('A' + mid);
    }
    cout<<back;

    return 0;
}
