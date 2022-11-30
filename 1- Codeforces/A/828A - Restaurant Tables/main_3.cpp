#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int n, a, b;
    cin >> n >> a >> b;

    int denied_clients = 0;
    int clients; 
    
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> clients;
        if (clients == 1)
        {
            if (a)
                a--;
            else if(b) b--, c++;
            else if(c)
                c--;
            else
                denied_clients +=1;
        }
        else
        {
            if (b)
                b--;
            else
                denied_clients+=2;
        }
    }

    cout << denied_clients << endl;
    return 0;
}