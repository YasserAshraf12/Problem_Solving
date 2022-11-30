#include <bits/stdc++.h>
using namespace std;

int sums[10000009];

int main(void)
{

    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int n,a,b;
    cin >> n >> a >> b;

    int sum = 0;
    int clients[n];
    int num_of_seats = (a*1) + (b*2);
    int denied_clients = 0;
    
    for(int i = 0; i < n; i++)
        cin >> clients[i];
    
    for(int i = 0; i < n; i++)
    {
        if((sum + clients[i]) > num_of_seats){
            denied_clients += clients[i];
        }
        else
            sum+= clients[i];
    }
    cout << denied_clients << endl;
    return 0;
}