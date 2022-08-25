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

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cerr.tie(0);
    cout.tie(0);
    cin.tie(0);

    unsigned int n, m;

    cin >> n >> m;

    vector<tuple<unsigned int, set<unsigned int>, unsigned int>> v(n);

    for (auto x : v)
    {
        get<0>(x) = 0;
    }
    unsigned int temp1, temp2;
    for (int i = 0; i < m; i++)
    {

        cin >> temp1 >> temp2;
        get<0>(v[temp1 - 1])++;
        get<1>(v[temp1 - 1]).emplace(temp2);
        get<2>(v[temp1 - 1]) = temp1 - 1;

        get<0>(v[temp2 - 1])++;
        get<1>(v[temp2 - 1]).emplace(temp1);
        get<2>(v[temp2 - 1]) = temp2 - 1;
    }

    unsigned int count = 0, j;
    bool allZero, oneFound;
    vector<unsigned int> v2;
    for (int i = 0; i < m; i++)
    {
        
        allZero = true;
        oneFound = false;
        for (auto x : v)
        {
            if (get<0>(x) == 0)
                continue;
            allZero = false;
            // cout << j << " " << get<0>(x) << endl;
            if (get<0>(x) == 1)
            {
                v2.push_back(get<2>(x));
                oneFound = true;
            }
        }

        if (allZero || !oneFound)
            break;
        if (oneFound)
        {
            count++;
            for (auto d : v2)
            {
                if (get<0>(v[d]) == 0)
                {
                    continue;
                }
                get<0>(v[d])--;
                temp1 = *get<1>(v[d]).begin();
                get<1>(v[d]).clear();

                get<0>(v[temp1 - 1])--;
                get<1>(v[temp1 - 1]).erase(d + 1);
            }
            v2.clear();
        }
    }

    cout << count;

    return 0;
}