#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void permutation(string s, vector<int> ar, int len) {
    if (s.length()==len) {
        cout<<s<<endl;
        return;
    }
    for (int i =0; i<26; i++) {
        if (ar[i]>0) {
            char c = 'a'+i;
            vector temp(ar);
            temp[i]--;
            permutation(s+c, temp, len);
        }
    }
}

int main() {
    string str;
    cin >> str;
    vector<int> factorial={1,1,2,6,24,120,720, 5040, 40320};
    int len = str.length();
    vector<int> ar(27);
    int ways = factorial[len];
    for (int i = 0; i < len; i++) {
        ar[str[i] - 'a']++;
        ways = ways/ar[str[i] - 'a'];
    }

    cout<<ways<<endl;
    permutation("", ar, len);




    return 0;
}