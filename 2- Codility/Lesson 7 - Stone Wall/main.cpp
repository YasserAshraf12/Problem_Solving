#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &H);

int main(void)
{
    vector<int> stones = {8, 8, 5, 7, 9, 8, 7, 4, 8};
    cout << solution(stones) << endl;

    return 0;
}

/*int solution(vector<int> &H)
{
    int counter = 0;

    for(int i = 0; i < H.size(); i++)
    {
        if(i == 0)
        {
            counter++;
        }
        else{
            if(H[i]%H[i-1] != 0)
                counter++;
        }
    }

    return counter;
}*/
int solution(vector<int> &H)
{
    stack<int>s;
    int stones = 0;

    for(int i = 0; i < H.size(); i++)
    {
        while(!s.empty() && s.top() > H[i]) s.pop();

        if (!s.empty() && s.top() == H[i]) continue;

        stones++;
        s.push(H[i]);
    }
    return stones;
}

