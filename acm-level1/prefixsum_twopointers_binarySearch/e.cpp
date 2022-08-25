#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    unsigned n, q;
    cin >> n >> q;
    unsigned tempArr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> tempArr[i];
    }

    vector<pair<ll, unsigned>> priority(n);
    vector<pair<unsigned, unsigned>> quer(q);
    
    unsigned l,r;
    for (int i = 0; i < q; i++)
    {
        cin >> l >> r;
        quer[i].first = l-1;
        quer[i].second = r-1;
        priority[l-1].first++;
        if(r < n)
            priority[r].first--;
    }

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += priority[i].first;
        priority[i].first = sum;
        priority[i].second = i;
        
    }
    
    sort(priority.begin(), priority.end());
    sort(tempArr, tempArr+n);
    
    unsigned long long arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[priority[i].second] = tempArr[i];
    }

    sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
        arr[i] = sum;
    }

    ull sum1 = 0;
    for (int i = 0; i < q; i++)
    {
        if(quer[i].first == 0)
            sum1 += arr[quer[i].second];
        else
            sum1 += (arr[quer[i].second] - arr[quer[i].first-1]);
    }

    cout << sum1;
    
    



    

    
    return 0;
    
    
}