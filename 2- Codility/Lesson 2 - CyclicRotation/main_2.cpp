#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> &A, int K);

int main()
{
    vector<int> x1 = {3, 8, 9, 7, 6}; 
    vector<int> x = solution(x1, 3);

    for (int z : x){
        cout << z << " ";
    }

    return 0;
}

vector<int> solution(vector<int> &A, int K){

    if (((A.size() < 0 || A.size() > 100)) || ((K < 0)||(K > 100)))
        exit(0);

    for (int val : A) {
        if(val < -1000 || val > 1000)
            exit(0);
    }

    if (A.size() == 0)
        return {};

    if (A.size() == 1)
        return A;

    if(A.size() == K)
        return A;
        
    int new_A[A.size()];
    for (unsigned int i=0; i < A.size(); i++)
        new_A[(i+K)%A.size()] = A[i];


    vector<int> B;
    for (unsigned int i=0; i < A.size(); i++)
        B.push_back(new_A[i]);

    return B;
}

