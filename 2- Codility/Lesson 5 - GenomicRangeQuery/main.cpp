#include <bits/stdc++.h>
using namespace std;

/* Global Variables */
int a[100009], g[100009], c[100009], t[100009];

vector<int> solution(string &S, vector<int> &P, vector<int> &Q);

int main()
{
    vector<int> p = {2, 5, 0};
    vector<int> q = {4, 5, 6};
    string s = "CAGCCTA";
    vector<int> res = solution(s, p, q);

    for (int v : res)
        cout << v << endl;

    return 0;
}

vector<int> solution(string &S, vector<int> &P, vector<int> &Q)
{
    if (S.length() == 0)
        return {};

    int N = S.length();

    a[0] = (S[0] == 'A');
    g[0] = (S[0] == 'G');
    c[0] = (S[0] == 'C');
    t[0] = (S[0] == 'T');

    for(int i = 1; i < N; i++)
    {
        a[i] = a[i-1] + (S[i] == 'A');
        g[i] = g[i-1] + (S[i] == 'G');
        c[i] = c[i-1] + (S[i] == 'C');
        t[i] = t[i-1] + (S[i] == 'T');
    }
    
    vector<int>result;
    for(int i = 0; i < P.size(); i++)
    {
        int l = P[i]; 
        int r = Q[i];
        
        if(a[r] > a[l] || S[l] == 'A')            
            result.push_back(1);  
        else if(c[r] > c[l] || S[l] == 'C')
            result.push_back(2);
        else if(g[r] > g[l] || S[l] == 'G')
            result.push_back(3);
        else
            result.push_back(4);
    }
    return result;
}