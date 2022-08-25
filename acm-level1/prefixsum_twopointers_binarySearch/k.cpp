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

    // string str = "ahmad";
    // set<char> s(str.begin(), str.end() );
    // cout << s.size();

    ui n;
    string str;
    cin >> n >> str;

    set<char> chs(str.begin(), str.end());

    // auto it = chs.emplace_hint(chs.begin(), str[0]);
    // for (int i = 1; i < n; i++)
    // {
    //     it = chs.emplace_hint(it, str[i]);
    // }

    ui distinct = chs.size();
    if (distinct == 1)
    {
        cout << "1";
    }
    else
    {

        ui start = 1, end = n + 1, wind;
        ui p1, p2;

        vector<int> check(n);
        // ui lastOk = n + 1;
        int index;
        bool flag = false;
        // cout << "disti = " << distinct << endl;
        while (start < end)
        {
            wind = (start + end) / 2;
            p1 = 0;
            p2 = wind - 1;
            index = 0;
            // cout << "***********\nstart " << start << " end = " << end << endl;
            map<char, ui> m;
            while (p2 < n)
            {
                check[wind - 1] = -1;
                if (index == 0)
                {
                    // set<char> temp(str.begin() + p1, str.begin() + p2 + 1);
                    for (int i = 0; i < wind; i++)
                    {
                        ++m[str[i]];
                    }

                    index++;
                }
                else
                {
                    ++m[str[p2]];
                    if (m[str[p1 - 1]] == 1)
                    {
                        m.erase(str[p1 - 1]);
                    }
                    else
                    {
                        --m[str[p1 - 1]];
                    }
                }

                // cout << "p1 = " << p1 << " p2 = " << p2 << " windo = " << wind << endl;
                // cout << "m = " << m.size() << endl;

                if (m.size() == distinct)
                {
                    check[wind - 1] = 1;
                    // lastOk = min(lastOk, wind);
                    if (wind == distinct || (wind < n && check[wind - 2] == -1))
                    {
                        flag = true;
                    }
                    // cout << "case1\n";
                    break;
                }
                p1++;
                p2++;
            }

            // if (flag)
            //     break;
            // // cout << "ok " << wind << "\n";
            // // else
            // // cout << "no " << wind << "\n";
            // else
            // {
            // if (((end - start + 1) <= 3) && (check[start - 1] == -1) && (check[end - 1] == 1))
            //     break;
            // else if (((end - start + 1) <= 3) && (start == 1) && (check[end - 1] == 1))
            //     break;
            // else if (((end - start + 1) <= 3) && (check[start - 1] == -1) && (end == n+1))
            //     break;
            if (flag)
            {
                cout << wind;
                break;
            }
            else if (check[wind - 1] == -1 && check[wind] == 1)
            {
                wind++;
                cout << wind;
                flag = true;
                // cout << "case2\n";
                break;
            }
            if (check[wind - 1] == -1)
            {
                // cout << "one\n";
                start = wind;
                // if(end - start == 1)
                //     start -= 2;
            }
            else
            {
                // cout << "two\n";
                end = wind;
                // if ((end != n) && end == lastOk)
                //     end++;
            }
            
            // }
        }
        // flag = false;
        // for (int i = start; i <= end; i++)
        // {
        //     p1 = 0;
        //     p2 = i;
        //     // cout << "i = " << i << endl;
        //     while (p2 < n)
        //     {
        //         set<char> temp(str.begin() + p1, str.begin() + p2 + 1);
        //         // check[wind - 1] = -1;
        //         // cout << "p1 = " << p1 << " p2 = " << p2 << " windo = " << wind << endl;
        //         // cout << "temp = " << temp.size() << endl;
        //         if (temp.size() == distinct)
        //         {
        //             // check[wind - 1] = 1;
        //             // lastOk = min(lastOk, wind);
        //             // if (wind == distinct )
        //             // {
        //             // }
        //             flag = true;
        //             break;
        //         }
        //         p1++;
        //         p2++;
        //     }
        //     if (flag)
        //     {
        //         cout << i + 1;
        //         break;
        //     }
        // }

        // if (end - start == 1)
        //     cout << end;
        // else
        // cout << wind;
    }
    return 0;
}