#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int c, v0, v1, a, l;

    cin >> c >> v0 >> v1 >> a >> l;

    int pages = v0;
    int i = 0;

    while(c > 0)
    {
        i++;
        c -= pages;
        if(c  <= 0)
            break;
        c += l;
        pages += a;
        if (pages >= v1)
            pages = v1;
    }

    cout << i << endl;
    return 0;
}