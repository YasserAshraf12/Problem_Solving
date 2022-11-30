#include <bits/stdc++.h>
using namespace std;


bool precede(int x, int y)
{
    return x > y;
}

int main(void)
{
    int arr [] = {0 , -1 , 2 , 5, 9 , 7 , 0, -88, 100};

    int n = sizeof(arr) / sizeof(arr[0]);
    
    // ASC
    sort(arr, arr+n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    cout << endl;
    // DESC
    sort(arr, arr+n, precede);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}