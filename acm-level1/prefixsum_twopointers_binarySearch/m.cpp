#include <bits/stdc++.h>

using namespace std;

typedef unsigned int ui;
typedef unsigned long long ull;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ull n, k;
    cin >> n >> k;

    string str;
    cin >> str;
    if (n == 1)
        cout << "1";
    else
    {
        // vector<pair<ui, ui>> preSum(n);
        // ui sumA = 0, sumB = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     if(str[i] == 'a')
        //         ++sumA;
        //     else
        //         ++sumB;

        //     preSum[i].first = sumA;
        //     preSum[i].second = sumB;
        // }
        

        ui start = 1, end = n + 1, wind, p1, p2;
        vector<int> check(n);
        bool flag = false;

        while (start < end)
        {
            wind = (start + end) / 2;
            p1 = 0;
            p2 = wind - 1;
            // cout << "***********\nstart " << start << " end = " << end << endl;
            ui index = 0, as, bs;
            while (p2 < n)
            {
                check[wind - 1] = -1;
                if (index == 0)
                {
                    multiset<char> ms(str.begin() + p1, str.begin() + p2 + 1);
                    as = ms.count('a');
                    bs = ms.count('b');
                    ++index;
                }
                else
                {
                    if(str[p1-1] == 'a')
                        as--;
                    else
                        bs--;
                    if(str[p2] == 'a')
                        as++;
                    else
                        bs++;
                }
                ui deference = min(as, bs);
                // cout << "p1 = " << p1 << " p2 = " << p2 << " windo = " << wind << endl;
                // cout << "deference = " << deference << endl;
                if (deference <= k)
                {
                    check[wind - 1] = 1;
                    if (wind == n || (check[wind - 1] == 1 && check[wind] == -1) || (check[wind - 1] == -1 && check[wind - 2] == 1))
                    {
                        flag = true;
                    }
                    break;
                }
                p1++;
                p2++;
            }
            if (flag)
            {
                cout << wind;
                break;
            }
            else if (check[wind - 1] == 1)
            {
                start = wind;
            }
            else
                end = wind;
        }
    }

    // vector<pair<ull, ull>> a;
    // vector<pair<ull, ull>> b;

    // for (int i = 0; i < n; i++)
    // {
    //     if (str[i] == 'a')
    //     {
    //         a.push_back({0, i});
    //     }
    //     else
    //         b.push_back({0, i});
    // }

    // // if ((a.size() >= b.size() && k >= b.size()) || (b.size() >= a.size() && k >= a.size()))
    // if ((k >= b.size()) || (k >= a.size()))
    // {
    //     cout << n;
    // }
    // else if (a.size() > b.size())
    // {
    //     for (int i = 0; i < b.size(); i++)
    //     {
    //         if (i == 0)
    //         {
    //             if (i + 1 < b.size())
    //                 b[i].first = b[i + 1].second;
    //             else
    //                 b[i].first = n;
    //         }
    //         else if (i == b.size() - 1)
    //         {
    //             if (i - 1 >= 0)
    //                 b[i].first = i - b[i - 1].second;
    //             else
    //                 b[i].first = n;
    //         }
    //         else
    //         {
    //             b[i].first = b[i + 1].second - b[i - 1].second - 1;
    //         }
    //     }
    //     sort(b.rbegin(), b.rend());
    //     for (int i = 0; i < k; i++)
    //     {
    //         str[b[i].second] = 'a';
    //     }
    //     ull x = 0, y = 0, maxlen = 0, sum = 0;

    //     while (x < n && y < n)
    //     {
    //         if (str[y] == 'a' && y != n - 1)
    //             y++;
    //         else if (str[y] == 'a' && y == n - 1)
    //         {
    //             y++;
    //             maxlen = max(maxlen, y - x);
    //         }
    //         else if (str[y] == 'b')
    //         {
    //             maxlen = max(maxlen, y - x);
    //             y++;
    //             x = y;
    //         }
    //     }
    //     cout << maxlen;
    // }
    // else if (b.size() > a.size())
    // {
    //     for (int i = 0; i < a.size(); i++)
    //     {
    //         if (i == 0)
    //         {
    //             if (i + 1 < a.size())
    //                 a[i].first = a[i + 1].second;
    //             else
    //                 a[i].first = n;
    //         }
    //         else if (i == a.size() - 1)
    //         {
    //             if (i - 1 >= 0)
    //                 a[i].first = i - a[i - 1].second;
    //             else
    //                 a[i].first = n;
    //         }
    //         else
    //         {
    //             a.e
    //             a[i].first = a[i + 1].second - a[i - 1].second - 1;
    //         }
    //     }
    //     sort(a.rbegin(), a.rend());
    //     for (int i = 0; i < k; i++)
    //     {
    //         str[a[i].second] = 'b';
    //     }
    //     ull x = 0, y = 0, maxlen = 0, sum = 0;

    //     while (x < n && y < n)
    //     {
    //         if (str[y] == 'b' && y != n - 1)
    //             y++;
    //         else if (str[y] == 'b' && y == n - 1)
    //         {
    //             y++;
    //             maxlen = max(maxlen, y - x);
    //         }
    //         else if (str[y] == 'a')
    //         {
    //             maxlen = max(maxlen, y - x);
    //             y++;
    //             x = y;
    //         }
    //     }
    //     cout << maxlen;

    // }
    // else
    // {

    // }

    // l = 1 , r = 3;
    // 1 2 3 2 1 
    // 1 3 6 8 9
    // sum = presum[r] - presum[l-1]



    return 0;
}