#include <bits/stdc++.h>
using namespace std;

struct Point{
    int x;
    int y;
};

Point min_p;
Point max_p;

int main(void)
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int n, m; cin >> n >> m;

    char square[n][m];

    for(int i = 0; i < n; i++)
    {
        string str; cin >> str;

        for(int j = 0; j < m; j++)
        {
            square[i][j] = str[j];
        }
    }

    min_p.x = -1;
    min_p.y = -1;

    max_p.x = -1;
    max_p.y = -1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) 
        {
            if(square[i][j] == 'B')
            {
                if(min_p.x == -1)
                {
                    min_p.x = i;
                    min_p.y = j;
                    goto out;
                }
            }
        }
    }

    out: ;

    for(int i = n-1; i > 0; i--){
        for(int j = m-1; j > 0; j--) 
        {
            if(square[i][j] == 'B')
            {
                if(max_p.x == -1)
                {
                    max_p.x = i;
                    max_p.y = j;
                    goto out_max;
                }
            }
        }
    }
    out_max: ;

    if(min_p.x == -1 || max_p.x == -1){
        cout << 1 << endl;
        return 0;
    }

    cout << "(" << min_p.x << ", " << min_p.y << ")" << endl;
    cout << "(" << max_p.x << ", " << max_p.y << ")" << endl;

    int side = 0;

    int xs = max_p.x - min_p.x;
    int ys = max_p.y - max_p.y;
    if(xs > ys)
        side = xs + 1;
    else
        side = ys + 1;
    
    cout << "side: " << side << endl;


    int white = 0;
    for(int i = min_p.y; i <= max_p.y; i++)
    {
        for(int j = min_p.x; j <= max_p.x; j++)
        {
            if(square[i][j] == 'W')
                white++;
        }
    }
    cout << "Need To Color Cells: " << white << endl;
    return 0;
}