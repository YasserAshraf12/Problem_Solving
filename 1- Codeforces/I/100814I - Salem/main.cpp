#include <bits/stdc++.h>
using namespace std;

string to_binary(int num_b)
{
    string binary = "";
    while(num_b!=0)
    {
        if(num_b%2 == 0)
        {
            binary+="0";
        }
        else{
            binary+="1";
        }
        num_b/=2;
    }
    return binary;
}

int hamming_distance(string s1, string s2)
{
    int dist = 0;
    int k = 0;

    if(s1.length() > s2.length())
    {
        for(k; k < s2.length(); k++)
        {
            if(s1[k] != s2[k])
                dist++;
        }
        while(k < s1.length())
        {
            if(s1[k] != '0')
                dist++;
            k++;
        }
    }
    else if(s1.length() < s2.length())
    {
        for(k; k < s1.length(); k++)
        {
            if(s1[k] != s2[k])
                dist++;
        }
        while(k < s2.length())
        {
            if(s2[k] != '0')
                dist++;
            k++;
        }
    }
    else{
        for(k; k < s1.length(); k++)
        {
            if(s1[k] != s2[k])
                dist++;
        }
    }
    return dist;
}

int main(void)
{

    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE


    int t,n;
    cin >> t;

    for(int l = 0; l < t; l++)
    {
        cin >> n;
        int nums[n];
        string nums_bin[n];

        for(int i = 0; i < n; i++){
            cin >> nums[i];
            nums_bin[i] = to_binary(nums[i]);
        }

        int max = 0;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++)
            {
                int dist_h = hamming_distance(nums_bin[i], nums_bin[j]);
                if(dist_h > max)
                    max = dist_h;
            }
        }
        cout << max << endl;
    }
    return 0;
}
