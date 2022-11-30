#include <iostream>

using namespace std;


int main()
{
    int a,b;

    cin >> a >> b;

    if ((a < 1) || (a>b) || (b>10))
    return -1;

    int years_counter = 0;
    if (a==b)
    {
        years_counter = 1;
        cout << years_counter << endl;
    }
    else
    {
        while (b>=a)
        {
            years_counter++;
            a*=3;
            b*=2;
        }

        cout << years_counter << endl;
    }

    return 0;
}