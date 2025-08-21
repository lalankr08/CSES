#include <bits/stdc++.h>
using namespace std;

struct Fenwick {
    vector<int> bit;
    int n;
    Fenwick(int n) : n(n), bit(n+1, 0) {}
    
    void add(int idx, int val) {
        for (; idx <= n; idx += idx & -idx) bit[idx] += val;
    }
    
    int sum(int idx) {
        int res = 0;
        for (; idx > 0; idx -= idx & -idx) res += bit[idx];
        return res;
    }
    
    
    int kth(int k) {
        int idx = 0, mask = 1 << (31 - __builtin_clz(n));
        for (; mask; mask >>= 1) {
            int nxt = idx + mask;
            if (nxt <= n && bit[nxt] < k) {
                idx = nxt;
                k -= bit[nxt];
            }
        }
        return idx + 1;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; long long k;
    cin >> n >> k;
    k++;

    Fenwick fen(n);
    for (int i = 1; i <= n; i++) fen.add(i, 1);

    int rema = n;
    long long pos = 0;
    while (rema > 0) {
        long long tempk = k % rema;
        if (tempk == 0) tempk = rema;

        pos = (pos + tempk) % rema;
        if (pos == 0) pos = rema;

        int person = fen.kth(pos);
        cout << person << " ";

        fen.add(person, -1);
        rema--;
        pos--; 
    }

    return 0;
}
