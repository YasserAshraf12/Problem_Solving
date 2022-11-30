#include <bits/stdc++.h>

using namespace std;

int solution(vector<int>&);

int main()
{
    vector<int>v = {9, 3, 9, 3, 9, 7, 9};
    cout << solution(v) << endl;

    return 0;

}

int solution(vector<int> &A)
{
    if(A.size() == 0)
        exit(0);
    
    if(A.size() == 1)
        return A[0];
    
    if(A.size()%2==0)
        exit(0);

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

    for(int i = 1; i <=size_; i++)
    {
        if(counts[i]%2!=0)
            return i;
    }
    return 0;
}