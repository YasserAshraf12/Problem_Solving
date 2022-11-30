#include <bits/stdc++.h>
using namespace std;

int solution(int X, vector<int> &A);

int main()
{
    vector<int> x = {1};
    cout << solution(5,x) << endl;
    return 0;
}

bool check_leaves(bool checks[], int n){
    bool checks__ = true;

    for (int p = 1; p < (n+1); p++){
        checks__= checks__ && checks[p];
    }
    return checks__;
}

int solution(int X, vector<int> &A)
{
    int counts[X];
    bool checks[X];

    for(int i = 0; i < X; i++)
    {
        counts[i] = 0;
        checks[i] = false;
    }

    for(int i = 0; i < A.size(); i++)
    {
        checks[A[i]] = true;

        if (A[i] == X)
        {
            bool ch = check_leaves(checks, X);
            if (ch)
                return (i);
        }
    }
    return -1;
}

int solution(int X, vector<int> &A) {

    set<int> pos   ;       //store the position only once 
    
    for(int i = 0 ; i<A.size() ; i++){
        pos.insert(A[i]) ; 
        if(pos.size()==X){     // all position are covered 
            return i ; 
        }
    }
    
    return -1 ; 
}