#include <bits/stdc++.h>
using namespace std;

#define len(s)   (int)s.length()

int main(void)
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    string s; cin >> s;
    if(len(s) == 1)
    {
        cout << 0 << endl;
        return 0;
    }

    int sum = 0;
    for(int i = 0; i < len(s); i++)
        sum += s[i]-'0';

    int counter = 1;
    while(sum/10)
    {
        int cpy = sum;
        sum = 0;
        while(cpy)
        {
            int digit = cpy%10;
            cpy /= 10;
            sum += digit;
        }

        counter ++;
    }
    cout << counter << endl;
    return 0;
}