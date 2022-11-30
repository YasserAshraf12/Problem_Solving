#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int n, m; cin >> n >> m;

    int black = 0;
    int t = 101, r = -1, l = 101, b = -1;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            char ch; cin >> ch;
            if(ch == 'B')
            {
                l = min(l, j);
                r = max(r, j);
                t = min(t, i);
                b = max(b, i);
                black++;
            }
        }
    }

    if(r == -1){
        cout << 1 << endl;
        return 0;
    }

    int side = 0;

    int xs = r-l+1;
    int ys = b-t+1;
    side = max(xs,ys);

    if (side > n || side > m)
    {
        cout << -1 << endl;
        return 0;
    }

    cout << (side*side)-black << endl;
    return 0;
}