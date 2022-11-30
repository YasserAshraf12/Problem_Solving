#include <iostream>

using namespace std;

int main()
{
    int n = 1;
    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int sums[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        sums[i] = sum;
    }

    for(int i = 0; i < n; i++)
        cout << sums[i] << " ";

    return 0;
}