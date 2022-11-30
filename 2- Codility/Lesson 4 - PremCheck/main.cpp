#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A);

int main() {

    vector<int> x = {1, 3,2};
    cout << solution(x) << endl;

    return 0;
}

int solution(vector<int> &A)
{
    if(A.size() == 1){
        if(A[0] == 1)
            return 1;
    }

    if(A.size() == 0 || A.size() == 1)
        return 0;
    int n = *max_element(A.begin(), A.end());
    int counts[n+1];

    for(int i = 1; i < A.size()+1; i++)
        counts[i] = 0;
    
    for(int i = 0; i < A.size(); i++){
        if (A[i] > n || A[i] < 1)
            return 0; 
        counts[A[i]]++;
    }
    for(int i = 1; i < A.size()+1; i++)
        if(counts[i]!=1)
            return 0;
    return 1;
}