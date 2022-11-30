#include <bits/stdc++.h>
using namespace std;

int main(void)
{

    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE


    int n;
    
    cin >> n;

    int strength[n];
    int counter = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> strength[i];
    }

    sort(strength, strength+n);

    for(int i = 0; i < n; i++)
    {
        if(strength[i] > strength[0] && strength[i] < strength[n-1])
            counter++;
    }
    cout << counter << endl;
    return 0;
}
