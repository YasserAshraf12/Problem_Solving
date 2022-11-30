#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &);

int main()
{
    vector<int>x = {-1, -3};
    cout << solution(x) << endl;
    return 0;
}

bool isnegative(vector<int> A)
{
    bool ch = true;
    for(int i = 0; i < A.size(); i++)
    {
        if(A[i] > 0)
            ch = false;
    }
    return ch;
}

int solution(vector<int> &A)
{
    if(A.size() == 0)
        return 1;
    
    if(A.size() == 1)
        if (A[0] > 1)
            return A[0]-1;
        else if(A[0] == 1)
            return A[0]+1;
    
    if(isnegative(A))
        return 1;

    int n = *max_element(A.begin(), A.end());

    int counters[n+1];

    for(int i = 0; i < n+1; i++)
        counters[i] = 0;
    
    for(int i = 0; i < A.size(); i++)
        counters[A[i]]++;
    
    for(int i = 1; i <= n; i++)
    {
        if(counters[i] == 0)
            return i;
    }
    return n+1;
    
}