#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cerr.tie(0);
    cout.tie(0);
    cin.tie(0);
    // std::cout << std::setprecision(10) << std::fixed;

    int n;
    cin >> n;
    vector<string> strs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> strs[i];
    }

    sort(strs.begin(), strs.end());
    int index = -1;
    bool flag = true;

    for (int i = 0; i < strs[0].size(); i++)
    {
        for (auto v : strs)
        {
            if (v[i] != strs[0][i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            index++;
        else
            break;
    }

    cout << strs[0].substr(0, index+1);
    // for (int i = 0; i <= index; i++)
    // {
    //     cout << strs[0][i];
    // }

    return 0;
}