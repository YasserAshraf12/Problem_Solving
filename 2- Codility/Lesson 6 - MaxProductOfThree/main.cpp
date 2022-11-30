#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A) {
    sort(A.begin(), A.end());

    int pos = 0;
    int neg = 0;
    for(unsigned int i = 0; i < A.size(); i++)
    {
        if(A[i] >= 0)
            pos++;
        else
            neg++;
    }
    if(pos >= 3){
        return (A[A.size() - 1] * A[A.size() - 2] * A[A.size()- 3]);
    }
    else
    {
        vector<int> x;
        unsigned int i = 0,j= A.size()-1;

        while ((i < (A.size()/2)+1) && (j >=0))
        {
            if(x.size() == 3)
                break;
            if(abs(A[i]) > A[j])
            {
                x.push_back(A[i]);
                i++;
            }
            else{
                x.push_back(A[j]);
                j++;
            }
        }
        return (x[0] * x[1] * x[2]);
    };
}