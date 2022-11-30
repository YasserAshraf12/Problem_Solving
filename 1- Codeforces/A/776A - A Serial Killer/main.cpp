#include <bits/stdc++.h>
using namespace std;

int main(void)
{

    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    string temp1, temp2;
    string tmp1, tmp2;
    int n;

    map<string, string>victims;

    cin >> temp1 >> temp2;
    cout << temp1 << " " << temp2 << endl;

    cin >> n;
        
    for(int i = 0; i < n; i++)
    {
        cin >> tmp1 >> tmp2;
        victims[tmp1] = tmp2;
    }

    for (int i = 0; i < n; i++)
    {
        if(victims.count(temp1) > 0)
        {
            cout << victims.at(temp1) << " " << temp2 << endl;
            temp1 = victims.at(temp1);
        }
        else if(victims.count(temp2) > 0)
        {
            cout << temp1 << " " <<victims.at(temp2) << endl;
            temp2 = victims.at(temp2);
        }
    }
    return 0;
}