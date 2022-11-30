#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    char mat[10][10];

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            cin >> mat[i][j];
        }
    }

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(mat[i][j] == 'X')
            {
                // Search For Row
                int dots = 0;
                int xS = 1;
                for(int k = j+1; dots <= 1 && k < 10; k++)
                {
                    if(mat[i][k] == 'X'){
                        xS++;
                    }
                    else if(mat[i][k] == '.')
                    {
                        if(xS >= 4)
                        {
                            break;
                        }
                        dots++;
                    }
                    else
                        break;
                }
                
                if(xS >= 4)
                {
                    if(dots == 1)
                    {
                        cout << "YES" << endl;
                        return 0;
                    }
                    else if((j-1) >=0)
                    {
                        if(mat[i][j-1] == '.')
                        {
                            cout << "YES" << endl;
                            return 0;
                        }
                    }
                    else if((j+4) < 10)
                    {
                        if(mat[i][j+4] == '.')
                        {
                            cout << "YES" << endl;
                            return 0;
                        }
                    }
                }

                // Search for Column
                dots = 0;
                xS = 1;
                for(int k = i+1; dots <= 1 && k < 10; k++)
                {
                    if(mat[k][j] == 'X'){
                        xS++;
                    }
                    else if(mat[k][j] == '.')
                    {
                        if(xS >= 4)
                        {
                            break;
                        }
                        dots++;
                    }
                    else
                        break;
                }
                if(xS >= 4)
                {
                    if(dots == 1)
                    {
                        cout << "YES" << endl;
                        return 0;
                    }
                    else if((i-1) >=0)
                    {
                        if(mat[i-1][j] == '.')
                        {
                            cout << "YES" << endl;
                            return 0;
                        }
                    }
                    else if((i+4) < 10)
                    {
                        if(mat[i+4][j] == '.')
                        {
                            cout << "YES" << endl;
                            return 0;
                        }
                    }
                }

                // Search on diagonal downwards right
                dots = 0;
                xS = 1;
                for(int k = i+1, p = j+1; dots <= 1 && k < 10 && p < 10; k++, p++)
                {
                    if(mat[k][p]== 'X')
                        xS++;
                    else if (mat[k][p] == '.'){
                        if(xS >= 4)
                        {
                            break;
                        }
                        dots++;
                    }
                    else{
                        break;
                    }
                }
                if(xS >= 4)
                {
                    if(dots == 1)
                    {
                        cout << "YES" << endl;
                        return 0;
                    }
                    else if((i-1) >= 0 && (j-1) >= 0)
                    {
                        if(mat[i-1][j-1] == '.')
                        {
                            cout << "YES" << endl;
                            return 0;
                        }
                    }
                    else if((i+4) < 10 && (j+4) < 10)
                    {
                        if(mat[i+4][j+4] == '.')
                        {
                            cout << "YES" << endl;
                            return 0;
                        }
                    }
                }

                // Search on diagonal downwards left
                dots = 0;
                xS = 1;
                for(int k = i+1, p = j-1; dots <= 1 && k < 10 && p >= 0; k++, p--)
                {
                    if(mat[k][p]== 'X')
                        xS++;
                    else if (mat[k][p] == '.'){
                        if(xS >= 4)
                        {
                            break;
                        }
                        dots++;
                    }
                    else{
                        break;
                    }
                }
                if(xS >= 4)
                {
                    if(dots == 1)
                    {
                        cout << "YES" << endl;
                        return 0;
                    }
                    else if((i-1) >= 0 && (j+1) < 10)
                    {
                        if(mat[i-1][j+1] == '.')
                        {
                            cout << "YES" << endl;
                            return 0;
                        }
                    }
                    else if((i+4) < 10 && (j-4) >= 0)
                    {
                        if(mat[i+4][j-4] == '.')
                        {
                            cout << "YES" << endl;
                            return 0;
                        }
                    }
                }

                // Search Diagonal Upwards right
                dots = 0;
                xS = 1;
                for(int k = i-1, p = j+1; dots <=1 && k >=0 && p < 10; k--, p++)
                {
                    if(mat[k][p]== 'X')
                        xS++;
                    else if (mat[k][p] == '.'){
                        if(xS >= 4)
                        {
                            break;
                        }
                        dots++;
                    }
                    else{
                        break;
                    }
                }
                if(xS >= 4)
                {
                    if(dots == 1)
                    {
                        cout << "YES" << endl;
                        return 0;
                    }
                    else if((i+1) < 10 && (j-1) >=0 )
                    {
                        if(mat[i+1][j-1] == '.')
                        {
                            cout << "YES" << endl;
                            return 0;
                        }
                    }
                    else if((i-4) >= 0 && (j+4) < 10)
                    {
                        if(mat[i-4][j+4] == '.')
                        {
                            cout << "YES" << endl;
                            return 0;
                        }
                    }
                }

                // Search Diagonal Upwards left
                dots = 0;
                xS = 1;

                for(int k = i-1, p = j-1; dots <=1 && k >= 0 && p >= 0; k--, p--)
                {
                    if(mat[k][p]== 'X')
                        xS++;
                    else if (mat[k][p] == '.'){
                        if(xS >= 4)
                        {
                            break;
                        }
                        dots++;
                    }
                    else{
                        break;
                    }
                }
                if(xS >= 4)
                {
                    if(dots == 1)
                    {
                        cout << "YES" << endl;
                        return 0;
                    }
                    else if((i+1) < 10 && (j+1) < 10 )
                    {
                        if(mat[i+1][j+1] == '.')
                        {
                            cout << "YES" << endl;
                            return 0;
                        }
                    }
                    else if((i-4) >= 0 && (j-4) >= 0)
                    {
                        if(mat[i-4][j-4] == '.')
                        {
                            cout << "YES" << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
