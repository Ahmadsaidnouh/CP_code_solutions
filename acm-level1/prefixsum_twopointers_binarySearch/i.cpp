#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ull n, t;
    cin >> n >> t;
    ull arr[n];
    ull prefSum[n];

    ull sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        prefSum[i] = sum;
    }

    ull maxAns = 0, x = 0, y = 0;
    ll temp;

    for (int i = 0; i < n; i++)
    {
        if(i == 0)
        {
            y= upper_bound(prefSum, prefSum + n, t) - prefSum;
            maxAns = max(maxAns, y);
        }
        else
        {
            y= upper_bound(prefSum, prefSum + n, t + prefSum[i-1]) - prefSum;
            maxAns = max(maxAns, y - i);
            
        }
    }
    
    // for (int i = 0; i < n; i++)
    // {
    //     x = i;
    //     y = i;
    //     temp = t;
    //     while (y <= n && x <= y)
    //     {
    //         // cout << "x = " << x << " y = " << y << " temp = " << (temp - (ll)arr[y]) <<  endl;
    //         if ((y < n) && ((temp - (ll)arr[y]) >= 0))
    //         {
    //             temp -= arr[y];
    //             y++;
    //         }
    //         else
    //         {
    //             // if(y == n && temp >= 0)
    //             // maxAns = max(y - x + 1, maxAns);
    //             // else
    //             maxAns = max(y - x, maxAns);

    //             break;
    //             // x = y + 1;
    //         }

    //         // if (y == n)
    //         // {
    //         //     maxAns = max(y - x, maxAns);
    //         //     break;
    //         // }
    //         // cout << "x = " << x << " y = " << y  <<  endl;
    //     }
    //     // cout << maxAns;
    //     // cout << "**************\n";
    // }

    cout << maxAns;

    return 0;
}