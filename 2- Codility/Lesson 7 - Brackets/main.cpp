#include <bits/stdc++.h>
using namespace std;

int solution(string &S);

int main(void)
{
    string str = "([)()]";
    cout << solution(str) << endl;
    return 0;
}

int solution(string &S)
{
    stack<char> s;

    if (S.length() == 0)
        return true;

    if((S[0] == '}') || (S[0] == ']') || (S[0] == ')') || (S.length() == 1))
        return false;

    s.push(S[0]);

    for(int i = 1; i < S.size(); i++)
    {
        if((S[i] == '}') || (S[i] == ']') || (S[i] == ')'))
        {
            if(s.size() == 0) return false;

            char c = s.top();
            if((c == '{' && S[i] == '}') || (c == '[' && S[i] == ']') || (c == '(' && S[i] == ')')) s.pop();
        }
        else{
            s.push(S[i]);
        }
    }
    if(s.size()) return false;
    return true;
}