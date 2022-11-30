#include <bits/stdc++.h>

using namespace std;

int solution(int);
string bin(int);


int main(){

    /*cout << solution(805306373) << endl;*/
    return 0;
}

string bin(int n)
{
    int i;
    string x = "0";
    for (i = 1 << 30; i > 0; i = i / 2)
    {
        if((n & i) != 0)
        {
            x +="1";
        }
        else
        {
            x += "0";
        }
    }
    return x;
}

int solution(int N) {

    if ((N >= 1 && N < 5) || (N == 7 || N == 8))
        return 0;

    string binary_rep = bin(N);

    int gaps = 0;

    vector<int> gaps_v;

    for(unsigned i = 0; i < binary_rep.length(); i++)
    {
        if(binary_rep[i] == '1'){
            unsigned j = (i+1);
            for(; j < binary_rep.length(); j++)
            {
                if ((binary_rep[j] == '1') && (i == (j-1))){
                    i++;
                    continue;
                }

                else if(binary_rep[j] == '1')
                {
                    gaps = j-i-1;
                    gaps_v.push_back(gaps);
                    break;
                }
            }
            i=(j-1);
        }
    }

    if (gaps_v.size() >= 1)
        return (*max_element(gaps_v.begin(), gaps_v.end()));
    return 0;
}
