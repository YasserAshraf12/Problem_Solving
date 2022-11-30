#include <bits/stdc++.h>

typedef long long int ll;

using namespace std;

int main(void)
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    string spinner="v<^>";

    char s1, s2;
    char cw, ccw;
    ll n; 

    cin >> s1 >> s2;
    cin >> n;

    s1 = tolower(s1);
    s2 = tolower(s2);

    ll ind = -1;
    for(ll i = 0; i < 4; i++)
    {
        if(spinner[i]==s1){
            ind = i;
            break;
        }
    }
    
    if (ind != -1){
        cw = spinner[(ind+n)%4];
        if((ind-n)%4 < 0)
            ccw = spinner[((ind-n)%4)+4];
        else
            ccw = spinner[((ind-n)%4)];
    }

    if(cw==ccw)
        cout << "undefined";
    else if(cw==s2)
        cout << "cw";
    else if(ccw==s2)
        cout << "ccw";
    else
        cout << "undefined";

    return 0;
}