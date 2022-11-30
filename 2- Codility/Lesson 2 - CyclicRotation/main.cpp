#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> &A, int K);

int main()
{
    vector<int> x1 = {3, 5};
    vector<int> x = solution(x1, 5);

    for (int z : x){
        cout << z << " ";
    }
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
    
    if (K<A.size())
        K=A.size()-K;
    else
        K = K%A.size();
    
    vector <int> new_A;
    for (unsigned int i=K; i<A.size(); i++)
        new_A.push_back(A[i]);

    for (unsigned int i=0; i<K; i++)
        new_A.push_back(A[i]);

    return new_A;
}