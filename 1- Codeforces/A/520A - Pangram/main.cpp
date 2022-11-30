#include <iostream>

using namespace std;



int main()
{
    int n;

    cin >> n;

    if (n < 1 || n > 100)
        exit(0);

    else{
        bool check[300];
        char str[1000];
        
        scanf("%s", str);

        for(int i = 0; i < n; i++)
        {
            char c = tolower(str[i]);
            check[c] = 1;   
        }

        for (char c='a'; c <= 'z'; c++)
        {
            if(!check[c])
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}