#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A);

int main()
{
    vector<int> x = {4, 2, 2, 5, 1, 5, 8};
    cout << solution(x) << endl;
    return 0;
}

int solution(vector<int> &A)
{
    if (A.size() == 0)
        return 0;
    if (A.size() < 2)
        return 0;
    
    vector<double> avgs_2;
    vector<double> avgs_3;

    for(int i = 0; i < A.size(); i++)
    {
        if((i+1) < A.size())
        {
            avgs_2.push_back((double)(A[i]+A[i+1])/2.0);
            if((i+2) < A.size())
            {
                avgs_3.push_back((double)(A[i]+A[i+1]+A[i+2])/3.0);
            }
        }
    }

    if ((*min_element(avgs_2.begin(), avgs_2.end())) < (*min_element(avgs_3.begin(), avgs_3.end()))){
        return ((min_element(avgs_2.begin(),avgs_2.end()) - avgs_2.begin()));
    }else{
        return (min_element(avgs_3.begin(),avgs_3.end()) - avgs_3.begin())-1;
    }
}