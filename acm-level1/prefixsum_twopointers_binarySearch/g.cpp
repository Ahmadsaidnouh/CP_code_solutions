#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef unsigned int ui;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    std::cout << std::setprecision(10) << std::fixed;

    // vector<int> v1 = {-2,2,4};
    // vector<int> v2 = {-3,0};

    // cout << lower_bound(v2.begin(), v2.end(), -2) - v2.begin();

    ui n,m;
    cin >> n >>m;

    vector<ll> a(n);
    vector<ll> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    
    ull minDis1, minDis2, pos1, pos2, minDis = 0;

    for (int i = 0; i < n; i++)
    {
        if(a[i] < b[0])
        {
            // ull temp = minDis;
            // cout << "case1\n";
            minDis = minDis >= abs(b[0] - a[i]) ? minDis : abs(b[0] - a[i]);
        }
        else if(a[i] > b[m-1])
        {
            // cout << "case2\n";
            minDis = minDis >= abs(b[m-1] - a[i]) ? minDis : abs(b[m-1] - a[i]);

        }
        else
        {
            // cout << "case3\n";
            pos1 = upper_bound(b.begin(), b.end(), a[i]) - b.begin() - 1;
            pos2 = upper_bound(b.begin(), b.end(), a[i]) - b.begin();
            // cout << "pos1 = " << pos1 << " pos2 = " << pos2 << endl;

            minDis1 = min(b[pos2] - a[i], a[i] - b[pos1]);
            // cout << minDis1 << endl;

            minDis = max(minDis, minDis1);
            
        }
        
    }
    
    cout << minDis;

    return 0;
}