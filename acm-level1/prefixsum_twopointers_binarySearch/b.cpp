#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    unsigned int n,m;
    cin >> n >> m;

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
    sort(a.begin(), a.end());

    for (int i = 0; i < m; i++)
    {
        cout << (upper_bound(a.begin(), a.end(),b[i]) - a.begin()) << " ";
    }
    

    
    return 0;
    
    
}