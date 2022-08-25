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

    ui n;
    ull p;
    cin >> n >> p;

    vector<pair<ui, ui>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    long double first = 1, second = 50, mid = (first + second) / 2.0;
    long double consume;

    while ((abs(first - second) > 0.0000000000001))
    {
        consume = 0;
        for (auto vv : v)
        {
            consume += (vv.first * mid - vv.second);
        }

        if (consume > mid * p)
        {
            second = mid;
        }
        else
        {
            first = mid;
        }
        mid = (first + second) / 2.0;
    }

    cout << mid;

    return 0;
}