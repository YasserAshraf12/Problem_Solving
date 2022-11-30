#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &);
vector<int> prefix_sum(vector<int>&, int);

int main()
{
    vector<int> x = {1, 1};
    cout << solution(x) << endl;

    return 0;
}

vector<int> prefix_sum(vector<int>&A, int size_)
{
    vector<int>c_sum;
    int sum = 0;
    for(int j = 0; j < size_; j++)
    {
        sum+= (abs(A[j]));
        c_sum.push_back(sum);
    }
    return c_sum;
}

int solution(vector<int>&A){
    
    if(A.size() == 0 || A.size() == 1)
        return 0;
    
    vector<int> prefix_s = prefix_sum(A, A.size());

    int min = 999999999;

    for (int i = 1; i < A.size(); i++){
        int diff = abs(prefix_s[i] - (abs(prefix_s[A.size()-1]) - abs(prefix_s[i])));
        if (diff < min)
            min = diff;
    }
    return min;
}
