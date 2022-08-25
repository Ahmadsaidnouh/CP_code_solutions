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

    unsigned int n, m, k, t;

    cin >> n >> m >> k >> t;

    vector<tuple<unsigned int, unsigned int, unsigned int>> waste;
    vector<tuple<unsigned int, unsigned int, unsigned int>> inqurees;
    unsigned int temp1;
    unsigned int temp2;
    for (int i = 0; i < k; i++)
    {
        cin >> temp1 >> temp2;
        waste.push_back({((temp1 - 1) * m + (temp2 - 1)), temp1, temp2});
    }
    for (int i = 0; i < t; i++)
    {
        cin >> temp1 >> temp2;
        inqurees.push_back({((temp1 - 1) * m + (temp2 - 1)), temp1, temp2});
    }

    sort(waste.begin(), waste.end());
    unsigned int count;
    int i = 0;
    unsigned long long calc;
    for (i = 0; i < t - 1; i++)
    {
        auto index = find(waste.begin(), waste.end(), inqurees[i]);
        if (index != waste.end())
        {
            cout << "Waste\n";
        }
        else
        {
            count = 0;
            for (auto x : waste)
            {
                if (get<0>(x) < get<0>(inqurees[i]))
                    count++;
                else
                    break;
            }
            calc = ((get<0>(inqurees[i]) + 1) - count) % 3;
            if (calc == 0)
                cout << "Grapes\n";
            else if (calc == 1)
                cout << "Carrots\n";
            else
                cout << "Kiwis\n";
        }
    }

    auto index = find(waste.begin(), waste.end(), inqurees[i]);
    if (index != waste.end())
    {
        cout << "Waste";
    }
    else
    {
        count = 0;
        for (auto x : waste)
        {
            if (get<0>(x) < get<0>(inqurees[i]))
                count++;
            else
                break;
        }
        calc = ((get<0>(inqurees[i]) + 1) - count) % 3;
        if (calc == 0)
            cout << "Grapes";
        else if (calc == 1)
            cout << "Carrots";
        else
            cout << "Kiwis";
    }

    return 0;
}
