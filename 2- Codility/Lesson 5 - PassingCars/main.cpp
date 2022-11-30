#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A);

int main()
{
    vector<int>x = {0, 1, 0, 1, 0, 1};
    cout << solution(x) << endl;
    return 0;
}

int solution(vector<int> &A)
{
    long long total = 0;
    long long sums[2];
    long long pairs = 0;
    
    if(A.size()==0 || A.size()==1)
        return 0;
    
    for (int i = 0; i < 2; i++)
        sums[i]= 0;
    
    for (int i = 0; i < A.size(); i++)
    {
        if(A[i]==0){
            sums[0]++;
            total += sums[1];
        }
        else{
            sums[1]++;
        }
    }

    pairs = (sums[0]*sums[1]) - (total);
    if (pairs > 1000000000)
        return -1;
    else
        return pairs;
}


