#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int n; cin >> n;
    
    string arr[n];
    map<string, bool> printed;

    for( int x = 0; x < n; x++)
    {
        cin >> arr[x];
        printed.insert({arr[x], 0});
    }

    for(int i = n-1; i >= 0; i--)
    {
        if(!printed[arr[i]])
        {
            printed[arr[i]] = 1;
            cout << arr[i] << endl;
        }
    }
    return 0;
}