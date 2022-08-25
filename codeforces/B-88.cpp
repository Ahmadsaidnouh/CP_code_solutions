/*
                                                                              █
                                                                              █
                    ██               ██              █ █                      █                                                                
                                                                              █                                                                
                   ████             ████              █           █   █   █   █                                                                
     ██            ████             █  █              █           █   █   █   █                                                                
     ██               █              ██               █           █   █   █   █                                                                
     ██████████████████████████████████████████████████████████████████████   █                                                                
    ██        
   ██
  ██
 ██
██

                                     ██        ██    ██
                                     ██        ██    ██
                                     ██        ██    ██
                                     ██        ██    ██
                         █████       ██        ██    ██
                         █████       ██        ██    ██
                            ██       ██        ██    ██
                            █████████████████████    ██
*/
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cerr.tie(0);
    cout.tie(0);
    cin.tie(0);

    unsigned int n, m;
    float x;
    cin >> n >> m >> x;

    // cout << n << m << x;

    string str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    unsigned int q;
    string text;
    // cout << "adf";
    cin >> q >> text;
    // cout << q << text;

    vector<tuple<int, int>> shifts;
    tuple<vector<tuple<int, int>>, bool> keys[26];
    for (int i = 0; i < 26; i++)
    {
        get<1>(keys[i]) = false;
        // cout << "state = "<< get<2>(keys[i])<< endl;
    }

    // string str[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cout << str[i];
    // }

    bool upperCaseExists = false;
    for (int i = 0; i < text.size(); i++)
    {
        int temp3 = (int)text[i];
        if (temp3 >= 65 && temp3 <= 90)
        {
            upperCaseExists = true;
            break;
        }
    }

    char temp1;
    bool shiftFound = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // cout << i << " " << j;
            temp1 = str[i][j];
            // cout << temp1 << "===\n";
            if (temp1 == 'S')
            {
                shifts.push_back({i, j});
                // cout << "asf";
                shiftFound = true;

                continue;
            }
            get<0>(keys[(int)temp1 - 97]).push_back({i, j});
            get<1>(keys[(int)temp1 - 97]) = true;
        }
    }
    // cout << "sdfsfg";
    if (!shiftFound && upperCaseExists)
    {
        cout << "-1";
    }
    else
    {
        int x1, x2, y1, y2, intCh;
        unsigned long long count = 0;
        float dist;
        bool isFound;
        bool okay;
        // cout << x1 << " " << y1 << endl;

        for (int i = 0; i < q; i++)
        {
            intCh = (int)text[i];
            okay = false;
            // cout << "text = " << text[i]  << " inCh = " << intCh << endl;
            if (intCh >= 65 && intCh <= 90)
            {
                intCh += 32;
            }
            // cout << "text = " << text[i]  << " inCh = " << intCh << endl;
            if (get<1>(keys[intCh - 97]) == true)
                okay = true;
            // cout << "state = " << get<2>(keys[intCh-97]) << endl;

            // cout << "okay = " << okay << endl;

            // if (okay)
            // {

            //     intCh = (int)text[i];
            //     if (intCh >= 65 && intCh <= 90)
            //     {
            //         if (shifts.size() > 7)
            //         {

            //             for (auto b : get<0>(keys[intCh - 65]))
            //             {
            //                 x2 = get<0>(b);
            //                 y2 = get<1>(b);
            //                 isFound = false;
            //                 for (int e = 1; e <= x; e++)
            //                 {
            //                     for (int r = x2 - e; r <= (x2 + e); r++)
            //                     {
            //                         for (int t = y2 - e; t <= (y2 + e); t++)
            //                         {
            //                             x1 = r;
            //                             y1 = t;
            //                             // cout << x1 << " " <<  y1;
            //                             if ((x1 >= 0 && x1 < n) && (y1 >= 0 && y1 < m))
            //                             {
            //                                 if (str[x1][y1] == 'S')
            //                                 {

            //                                     dist = sqrt(pow(x1 - x2, 2) * 1.0 + pow(y1 - y2, 2)) * 1.0;
            //                                     if (dist <= x)
            //                                     {

            //                                         isFound = true;
            //                                         break;
            //                                     }
            //                                 }
            //                             }
            //                         }
            //                         if (isFound)
            //                             break;
            //                     }
            //                     if (isFound)
            //                         break;
            //                 }
            //                 if (isFound)
            //                     break;
            //             }
            //         }
            //         else
            //         {
            //             for (auto b : get<0>(keys[intCh - 65]))
            //             {
            //                 for (auto a : shifts)
            //                 {
            //                     x1 = get<0>(a);
            //                     y1 = get<1>(a);
            //                     dist = sqrt(pow(x1 - x2, 2) * 1.0 + pow(y1 - y2, 2)) * 1.0;
            //                     if (dist <= x)
            //                     {

            //                         isFound = true;
            //                         break;
            //                     }
            //                 }
            //                 if (isFound)
            //                     break;
            //             }
            //             // }

            //             // cout << intCh - 64 << " " << x2 << "<<>>" << y2 << endl;

            //             // cout << dist << endl;
            //             if (!isFound)
            //                 count++;
            //         }
            //     }
            //     else
            //     {
            //         break;
            //     }
            if (okay)
            {

                intCh = (int)text[i];
                if (intCh >= 65 && intCh <= 90)
                {
                    if (shifts.size() > 7)
                    {
                        for (auto b : get<0>(keys[intCh - 65]))
                        {
                            x2 = get<0>(b);
                            y2 = get<1>(b);
                            isFound = false;
                            for (int e = 1; e <= x; e++)
                            {
                                for (int r = x2 - e; r <= (x2 + e); r++)
                                {
                                    for (int t = y2 - e; t <= (y2 + e); t++)
                                    {
                                        x1 = r;
                                        y1 = t;
                                        // cout << x1 << " " <<  y1;
                                        if ((x1 >= 0 && x1 < n) && (y1 >= 0 && y1 < m))
                                        {
                                            if (str[x1][y1] == 'S')
                                            {

                                                dist = sqrt(pow(x1 - x2, 2) * 1.0 + pow(y1 - y2, 2)) * 1.0;
                                                if (dist <= x)
                                                {

                                                    isFound = true;
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    if (isFound)
                                        break;
                                }
                                if (isFound)
                                    break;
                            }
                            if (isFound)
                                break;
                        }
                    }
                    else
                    {

                        for (auto b : get<0>(keys[intCh - 65]))
                        {
                            x2 = get<0>(b);
                            y2 = get<1>(b);
                            isFound = false;
                            for (auto a : shifts)
                            {
                                x1 = get<0>(a);
                                y1 = get<1>(a);
                                dist = sqrt(pow(x1 - x2, 2) * 1.0 + pow(y1 - y2, 2)) * 1.0;
                                if (dist <= x)
                                {

                                    isFound = true;
                                    break;
                                }
                            }
                            if (isFound)
                                break;
                        }
                    }
                    if (!isFound)
                        count++;
                }
            }
            else
            {
                break;
            }
        }

        if (okay)
            cout << count;
        else
            cout << "-1";
    }

    return 0;
}
// C:\Program Files\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0