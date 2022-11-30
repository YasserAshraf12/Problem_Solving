#include <bits/stdc++.h>
using namespace std;

long long pre_costs[1000009];
long long pre_costs_sorted[1000009];

int main(void)
{

    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    long long n; cin >> n;

    long long cost[n];
    vector<long long>costs_v;

    for(long long i = 0; i < n; i++){
        cin >> cost[i];
        costs_v.push_back(cost[i]);
    }

    sort(costs_v.begin(), costs_v.end());

    pre_costs[1] = cost[0];
    pre_costs_sorted[1] = costs_v[0];

    for(long long i = 2; i < n+1; i++){
        pre_costs[i] = cost[i-1] + pre_costs[i-1];
        pre_costs_sorted[i] = costs_v[i-1] + pre_costs_sorted[i-1];
    }

    long long m; cin >> m;

    for(long long i = 0; i < m; i++)
    {
        long long type, l, r;

        cin >> type >> l >> r;

        if((r-l) == (n-1)){
            cout << pre_costs_sorted[r] << endl;
        }
        else if(type == 1)
        {
            cout << (pre_costs[r] - pre_costs[l-1]) << endl;
        }
        else cout << (pre_costs_sorted[r] - pre_costs_sorted[l-1]) << endl;
    }
    return 0;
}
