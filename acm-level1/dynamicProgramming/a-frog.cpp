#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef unsigned int ui;
typedef long long ll;

ll solve(ui n, ui index, vector<ll> dp, int arr[])
{
    // cout << "index = " << index << endl;
    if (index > n - 2)
    {
        // cout << "inde  = " << index << " 0\n " << endl;
        // cout << "index = " << index <<"0\n";
        return 0;
    }
    if (dp[index] != -1)
    {
        // cout << "ans = " << dp[index] << endl;
        // cout << "inde  = " << index << " ans = " << dp[index] << endl;
        return dp[index];
    }

    ll ans = LONG_LONG_MAX;
    ll temp;
    for (int i = 1; i <= 2; i++)
    {
        // int aa = min(aa,5);
        // if (index + i < n)
        temp = (solve(n, index + i, dp, arr) + abs(arr[index] - arr[index > n - 2 ? index : index + i]));
        // else
        // temp =
        ans = min(ans, temp);
    }
    dp[index] = ans;
    // cout << "inde  = " << index << " ans = " << ans << endl;

    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // cout << setprecision(10) << fixed;

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<ll> dp(n, -1);

    dp[n - 1] = 0;
    dp[n - 2] = abs(arr[n - 1] - arr[n - 2]);
    int index = n - 3;
    while (index >= 0)
    {
        // if (index != n - 3)
        dp[index] = min(abs(arr[index] - arr[index + 1]) + dp[index + 1], abs(arr[index] - arr[index + 2]) + dp[index + 2]);
        --index;
    }

    cout << dp[0];

    // cout << solve(n, 0, dp, arr);

    // ull sum = 0;

    // int index = n - 1;

    // // for (int i = n - 1; i > 0; --i)
    // while(index > 0)
    // {
    //     if (index - 2 >= 0)
    //     {
    //         if (abs(arr[index] - arr[index - 1]) <= abs(arr[index] - arr[index - 2]))
    //         {
    //             sum += abs(arr[index] - arr[index - 1]);
    //             --index;
    //         }
    //         else
    //         {
    //             sum += abs(arr[index] - arr[index - 2]);
    //             index -= 2;
    //         }
    //     }
    //     else
    //     {
    //         sum += abs(arr[index] - arr[index - 1]);
    //         --index;
    //     }
    // }
    // cout << sum;
    return 0;
}