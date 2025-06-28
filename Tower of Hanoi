#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<int> pow2 = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536};

void move(int i, int j, int e) {
    if (e==1) {
        cout<<i<<" "<<j<<endl;
        return;
    }
    bitset<3> bs;
    bs.set(i-1);
    bs.set(j-1);
    int k;
    for (int a=0; a<3; a++) {
        if (!bs.test(a)) k = a+1;

    }
    move(i, k, e-1);
    cout<<i<<" "<<j<<endl;
    move(k, j, e-1);

}

int main() {
    int n;
    cin>>n;
    cout<<pow2[n]-1<<endl;
    move(1, 3, n);

    return 0;
}
