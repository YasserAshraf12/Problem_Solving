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
    int squares[n];

    for(int i = 0; i < n; i++)
    {
        cin >> squares[i];
    }

    int max = 0;
    for(int i = 0; i < n; i++)
    {
        int counter = 1;

        if(n == 1)
        {
            cout << counter << endl;
            return 0;
        }

        else if(i == 0)
        {
            for(int j = i; j < n; j++)
            {
                if(squares[j+1] > squares[j]) break;
                else counter++;

                if(max < counter) max = counter;
            }
        }
        else{
            for(int j = i; j < n; j++){
                if(squares[j+1] > squares[j]) break;
                else counter++;
            }
            for(int k = i; k > 0; k--)
            {
                if(squares[k-1] > squares[k]) break;
                else counter++;
                if(max < counter) max = counter;
            }
        }
    }

    cout << max << endl;
    return 0;
}