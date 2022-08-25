#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // vector<pair<int, int>> v = {{2,INT_MAX}, {3,2} , {1,5}};
    // sort(v.begin(), v.end());
    // cout << upper_bound(v.begin(), v.end(), make_pair(2,INT_MAX)) - v.begin();
    unsigned int n;
    ull d;

    cin >> n >> d;

    vector<pair<ull, ull>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());

    // cout << "********\n";
    // for(auto vv : v)
    // cout << vv.first << " " << vv.second << endl;
    // cout << "********\n";

    vector<ull> prefSum(n);
    ull sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i].second;
        prefSum[i] = sum;
    }
    // cout << "********\n";
    // for(auto vv : prefSum)
    // cout << vv << endl;
    // cout << "********\n";

    ull maxSum = 0;
    ull val = 0;
    for (int i = 0; i < n; i++)
    {
        if(i > 0 && v[i].first == v[i-1].first)
            continue;

        // maxSum = 0;
        ull temp = v[i].first + d - 1;
        ull pos = lower_bound(v.begin(), v.end(), make_pair(temp, val-1)) - v.begin();
        // cout << "pos = " << pos << endl;
        // if((v[i].first + d) == v[pos].first)
        // pos--;

        if(i == 0)
            sum = prefSum[pos-1];
        else
            sum = prefSum[pos-1] - prefSum[i-1];

        maxSum = max(maxSum, sum);
    }
    
    cout << maxSum;
    
    

    

    
    return 0;
    
    
}