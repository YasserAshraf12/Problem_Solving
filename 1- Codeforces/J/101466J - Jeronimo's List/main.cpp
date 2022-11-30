#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

const int maxn = 30000005;
const ll mod = 3e7;

int a[maxn], counts[maxn];
int main(void)
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int n, m, q;
    cin >> n >> m >> q;

    for(int i = 1; i <= m; i++)
    {
        cin >> a[i];
        counts[a[i]]++;
    }

    for(int i = m+1; i <= n; i++)
    {
        a[i] = (a[i - m] + a[i - m + 1])%mod;
        counts[a[i]]++;
    }

    for(int i = 1; i <= 3e7; i++) counts[i] += counts[i-1];

    int x, p;
    for(int i = 1; i <=q; i++)
    {
        cin >> x;
        p = lower_bound(counts, counts+30000001, x)-counts;
        cout << p << endl;
    }
    return 0;
}