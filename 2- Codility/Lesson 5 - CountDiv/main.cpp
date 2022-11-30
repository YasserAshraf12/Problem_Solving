#include <bits/stdc++.h>
using namespace std;

int solution(int A, int B, int K);

int main()
{
    cout << solution(6, 11, 2) << endl;
    return 0;
}

int solution(int A, int B, int K){

    long long count = 0;

    if(A > B)
        return 0;
    
    if(A == B)
    {
        if(A%K == 0)
            return 1;
        else
            return 0;
    }

    for (long long i = A; i <=B; i++)
    {
        if(i%K==0)
            count++;
    }
    return count;
}

