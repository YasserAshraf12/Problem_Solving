#include <bits/stdc++.h>
using namespace std;

int solution(string &S);

int main(void)
{
    string str = "(())";
    cout << solution(str) << endl;
    return 0;
}

int solution(string &S)
{
    unsigned int n = S.size();
    int counter_open = 0, counter_closed = 0;

    if (n == 0)
        return true;

    if((S[0] == '}') || (S[0] == ']') || (S[0] == ')') || (S.length() == 1) || (n%2 != 0))
        return false;

    int n1 = n / 2;
    int counter = 0;
    for(unsigned int i = 0; i < n; i++)
    {
        if(S[i] == '('){ 
            n1--;
            counter++;
        }
        else
        {
            if(counter == 0)
                return false;
            counter--;
        }
    }
    if(n1==0 && counter==0)
        return true;
    return false;
}
