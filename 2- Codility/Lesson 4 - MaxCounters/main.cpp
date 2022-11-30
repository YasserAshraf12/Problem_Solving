#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int, vector<int> &);

int main()
{
    vector<int> x = {6,6,6,6,6,6};
    x = solution(5, x);

    for(int v : x)
        cout << v << " ";
    cout << endl;
    return 0;
}

vector<int> solution(int N, vector<int> &A)
{
    if(A.size() == 0)
        return {};
        
    int counters[N];
    int max = 0;

    for(int i = 0; i < N; i++)
        counters[i] = 0;
    
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] > N)
        {
            for(int j = 0; j < N; j++)
                counters[j] = max;
        }
        else{
            counters[A[i]-1]++;
            if(counters[A[i]-1] > max)
                max = counters[A[i]-1];
        }
    }
    vector<int> res;
    for(int val: counters)
        res.push_back(val);

    return res;
}