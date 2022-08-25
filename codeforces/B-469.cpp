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

    unsigned int p, q, l, r;
    cin >> p >> q >> l >> r;

    vector<pair<unsigned int, unsigned int>> v1(p);

    vector<pair<unsigned int, unsigned int>> v2(q);
    int temp1, temp2;
    for (int i = 0; i < p; i++)
    {
        cin >> temp1 >> temp2;

        v1[i] = {temp1, temp2};
    }
    for (int i = 0; i < q; i++)
    {
        cin >> temp1 >> temp2;

        v2[i] = {temp1, temp2};
    }

    unsigned count = 0;
    int a, b, c, d, index1 = 0, index2 = 0;

    for (int i = l; i <= r; i++)
    {
        index1 = 0;
        index2 = 0;
        // cout << "***\n";
        while (index1 < p && index2 < q)
        {
            a = v1[index1].first;
            b = v1[index1].second;
            c = v2[index2].first + i;
            d = v2[index2].second + i;

            
            if ((d >= a && d <= b) || (c >= a && c <= b) || (a >= c && a <= d) || (b >= c && b <= d))
            {
                count++;
                break;
            }
            else if(d < a)
            {
                index2++;
            }
            else if (c > b)
            {
                index1++;
            }
        }
    }

    cout << count;

    return 0;
}