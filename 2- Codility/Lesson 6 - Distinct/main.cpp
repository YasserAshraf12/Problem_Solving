#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A);

int main(void)
{
    vector<int> a = {1 ,3 , 5, 6, 1, 2, 5 , 3, 6};
    cout << solution(a);
    return 0;
}

int solution(vector<int> &A)
{
    set<int> s;

    for(int v : A){
        s.insert(v);
    }

    return s.size();
}