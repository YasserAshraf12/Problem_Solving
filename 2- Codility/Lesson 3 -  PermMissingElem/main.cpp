#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A)
{
    if(A.size() == 0)
        return 1;

    if (A.size() == 1)
        if((A[0]-1) != 0)
            return A[0]-1;
        return A[0]+1;
    
    int size_ = *max_element(A.begin(), A.end());

    int counts[size_];

    for(int i = 0; i <= size_; i++)
    {
        counts[i] = 0;
    }

    for(int i = 0; i < A.size(); i++)
    {
        counts[A[i]]++;
    }

    for(int i = 1; i <= size_; i++){
        if(counts[i] == 0)
            return i;
    }

    if(true){
        return (size_+1);
    }

    return 0;
}

int main()
{
    vector<int>v = {2,3,1,5};
    cout << solution(v) << endl;
    return 0;
}