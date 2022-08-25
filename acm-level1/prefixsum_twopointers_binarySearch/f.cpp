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

    ull n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (n == 1)
    {
        cout << "1 " << v[0];
    }
    else
    {
        sort(v.begin(), v.end());
        ll sum = 0;
        ll prefsum[n];
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            prefsum[i] = sum;
        }

        ull wind = n, first, last;
        bool flag = false;
        ull p1 = 1, p2 = n + 1;
        vector<int> check(n);
        vector<int> len(n);
        // for (; wind >= 1; --wind)
        while (p1 < p2)
        {
            wind = (p1 + p2) / 2;
            first = 0;
            last = wind - 1;
            // flag = 0;
            // cout << "***********\np1 " <<  p1 << " p2 = " << p2 << endl;
            // cout << "first " <<  first << " last = " << last << endl;
            while (last < n)
            {
                ll ans = v[last] * (wind - 1) - ((last == 0 ? 0 : prefsum[last - 1]) - (first == 0 ? 0 : prefsum[first - 1]));
                check[wind - 1] = -1;
                // cout << "ans = " << ans << " windo = " << wind << endl;
                if (ans <= k)
                {
                    check[wind - 1] = 1;
                    if (wind == n || (wind < n && check[wind] == -1))
                    {
                        flag = true;
                    }
                    break;
                }
                first++;
                last++;
            }
            if (flag)
                break;
                // cout << "ok " << wind << "\n";
            // else
                // cout << "no " << wind << "\n";
            else
            {
                if(check[wind-1] == -1)
                {
                    // cout << "one\n";
                    p2 = wind;
                }
                else
                {
                    // cout << "two\n";
                    p1 = wind;
                }
            }
        }
        cout << wind << " " << v[last];
    }

    return 0;
}