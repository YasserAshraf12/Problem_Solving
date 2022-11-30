#include <bits/stdc++.h>
using namespace std;

bool EQ(int a[], int b[], int n)
{
    for(int j = 0; j< n; j++){
        if(a[j] != b[j])
            return false;
    }
    return true;
}

int main(void)
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int n,l;
    cin >> n >> l;

    int kefa[n], sasha[n];

    for(int i = 0; i < n; i++)
        cin >> kefa[i];
    
    for(int i = 0; i < n; i++)
        cin >> sasha[i];
    
    for(int i = 0; i < l; i++)
    {
        for(int k = 0; k < n; k++)
        {
            kefa[k] = (kefa[k]+1)%l;
        }
        sort(kefa, kefa+n);

        if(EQ(kefa, sasha, n))
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    
    cout << "NO" << endl;
    return 0;
}


    