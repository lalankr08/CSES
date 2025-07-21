#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll MOD = 1000000007;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int  n, m;
    cin>>n>>m;
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            char a; cin>>a;
            if (a=='#') visited[i][j]=true;

        }
    }
    function<void(int, int)> dfs;
    dfs = [&visited, n, m, &dfs](int a, int b) -> void {
        if (a>=n|| b>=m ||a<0 || b<0) return;
        if (visited[a][b]) { return; }
        visited[a][b] = true;
        dfs(a, b+1);
        dfs(a+1, b);
        dfs(a-1, b);
        dfs(a, b-1);

    };
    ll sum =0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (!visited[i][j]) {
                sum++;
                dfs(i, j);
                // cout<<i<<" "<<j<<" "<<endl;
            }

        }
    }
    cout<<sum<<"\n";

    return 0;
}
