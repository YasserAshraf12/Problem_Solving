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

    int arr[n];

    cout << "arr: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cout << arr[i] << " ";
    }

    int l; cin >> l;
    for(int i = 0; i < l; i++)
    {
        int start , end, k; cin >> start >> end >>  k;

        arr[start-1] += k;
        arr[end] -=k;
    }

    cout << endl << "pre: " << arr[0] << " ";
    for(int i = 1; i < n; i++){
        arr[i] += arr[i-1];
        cout << arr[i] << " ";
    }

    return 0;
}