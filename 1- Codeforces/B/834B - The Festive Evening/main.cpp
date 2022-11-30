#include <bits/stdc++.h>
using namespace std;

#define MAXN 1000000+9

int open[300], close[300];
int a[MAXN];

int main(void)
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int n, k; cin >> n >> k;

    string s; cin >> s;
    
    memset(open, -1, sizeof(open));

    for(int i = 0; i < s.length(); i++)
    {
        int c = (int)s[i];

        if(open[c] == -1)
            open[c] = i;
        close[c] = i;
    }

    for(int c = 0; c < 300; c++){
        if(open[c] != -1)
        {
            a[open[c]] ++;
            a[close[c]+1] --;
        }
    }

    for(int i = 1; i < MAXN; i++) a[i] += a[i-1];

    int mx = 0;
    for(int i = 1; i < MAXN; i++)
        mx = max(mx, a[i]);
    
    if(mx > k)  cout << "YES" << endl;
    else        cout << "NO"  << endl;
    
    return 0;
}