#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int a[n];

    int max = -9999;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
            max = a[0];
        else
            if(a[i] > max)
                max = a[i];
    }

    int count[max+1];
    for(int i = 0; i < max+1; i++)
        count[i] = 0;
    
    for (int j = 0; j < n; j++){
        count[a[j]]++;
    }

    for (int j = 0; j < max+1; j++)
        cout << count[j] << endl;
    
    return 0;
}