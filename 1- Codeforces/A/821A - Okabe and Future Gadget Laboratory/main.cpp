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

    int arr[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i][j] != 1)
            {
                for (int p = 0; p < n; p++)
                {
                    for(int k = 0; k < n; k++)
                    {
                        if(arr[i][k] + arr[p][j] == arr[i][j])
                            goto done;
                    }
                }

                cout << "No" << endl;
                return 0;

                done:;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}