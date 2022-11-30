#include <bits/stdc++.h>
using namespace std;
int score[1005];
string name[1005];

int main(void)
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

	int i,n; cin >> n;
	map<string,int>	m1,m2;

	string s; 
	for(i = 0; i < n; i++)
	{
		cin >> name[i] >> score[i];
		m1[name[i]] += score[i];
	}

	map<string,int>::iterator it;

	int maxn = -1001;
	for(it=m1.begin();it!=m1.end();it++)
	{
		if(maxn < it->second)
			maxn = it->second;
	}
	for(i=0;i<n;i++)
	{
		if(m1[name[i]]==maxn)
		{
			m2[name[i]] += score[i];
			if(m2[name[i]]>=maxn)
			{
				cout << name[i] << endl;
				break;
			}
		}
	}
	return 0;
}