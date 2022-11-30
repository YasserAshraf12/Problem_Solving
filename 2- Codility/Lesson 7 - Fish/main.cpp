#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int solution(vector<int> &A, vector<int> &B);

int main(void)
{
    vector<int> A = {4, 3, 2, 1, 5};
    vector<int> B = {0, 1, 0, 0, 0};
    cout << solution(A,B);
    return 0;
}

int solution(vector<int> &A, vector<int> &B)
{
    if(A.size() != B.size() || A.size() == 0)
        return 0;

    int n = A.size();
    stack<int> s;
    int counter = 0;

    for(int i = 0; i < n; ++i)
    {
        if(B[i] == 0)
        {
            while(!(s.empty()) && (A[s.top()] < A[i]))
                s.pop();
            if(s.empty())
                counter++;
        }
        else s.push(i);
        
    }
    return s.size() + counter;
}