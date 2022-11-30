#include<iostream>

using namespace std;


int main()
{
    int n; cin >> n;

    if (n < 2 || n > 30)
        return 0;

    int arr[n][2];

    for (int i = 0; i < n; i++){
        cin >> arr[i][0];
        cin >> arr[i][1];

        if(((arr[i][0] < 1)||(arr[i][0] > 100)) || ((arr[i][1] < 1)||(arr[i][1] > 100)))
            return 0;
    }

    int count_matches = 0;
    
    for (int i = 0; i < n; i++){
        int f = arr[i][0];
        int s = arr[i][1];

        for(int  j = (i+1); j < n; j++){
            if (f == arr[j][1])
                count_matches++;
            if (s == arr[j][0])
                count_matches++;
        }
    }

    cout << count_matches << endl;

    return 0;
}
