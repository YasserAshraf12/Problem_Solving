#include <bits/stdc++.h>
using namespace std;

int main(void)
{

    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    long long n; cin >> n;
    char s[n];
    cin >> s;

    int ones = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '1'){
            ones++;
        }
        else
        {
            cout << ones;
            ones = 0;
        }
    }
    cout << ones;

    return 0;

}
