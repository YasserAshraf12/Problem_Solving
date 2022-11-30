#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int b, a, q, r;

    b = 20, a = 3;

    cout << b/(float)a << endl;

    q = b/a;
    r = b%a;

    cout << a*q+r << endl;
    cout << (b == (a*q+r)) << endl;


    // Circular and % result 0 -> (a-1)
    for(int i = 0; i < 20; i++)
        cout << (i%5) << " ";
    cout << endl;


    // (a+b)%m = (a%m + b%m)%m


    // Cyclic as Days in week cyclic for 40 days like
    

    return 0;
}