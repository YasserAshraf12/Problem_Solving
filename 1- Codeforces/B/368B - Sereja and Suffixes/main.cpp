#include <bits/stdc++.h>
using namespace std;

int visited[100009];
int a[100009] , l[100009];
int res[100009];

int main(void)
{

    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int n,m; cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> l[i];

    for(int i = n; i > 0; i--)
    {
        res[i] = res[i+1];

        if(visited[a[i]] == 0)
        {
            visited[a[i]] = 1;
            res[i]++;
        }
    }

    for(int v = 0; v < m; v++) cout << res[l[v]] << endl;

    return 0;
}