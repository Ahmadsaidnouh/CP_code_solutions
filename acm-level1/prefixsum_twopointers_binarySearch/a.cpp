#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    unsigned int n,q;
    cin >> n;

    vector<unsigned int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    cin >> q;

    vector<ull> m(q);
    for (int i = 0; i < q; i++)
    {
        cin >> m[i];
    }
    sort(x.begin(), x.end());
    for (int i = 0; i < q; i++)
    {
        cout << (upper_bound(x.begin(),x.end(), m[i]) - x.begin()) << "\n";
    }
        
    

    
    return 0;
    
    
}