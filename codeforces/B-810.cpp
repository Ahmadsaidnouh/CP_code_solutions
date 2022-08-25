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

bool sortbysec(const tuple<int, int, int> &a, const tuple<int, int, int> &b)
{
    return (get<1>(a) > get<1>(b));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cerr.tie(0);
    cout.tie(0);
    cin.tie(0);

    unsigned int n, f;
    cin >> n >> f;
    vector<tuple<unsigned long long, unsigned long long, unsigned long long>> temp1;
    
    unsigned long long k, l, def, sum = 0;

    for (unsigned int i = 0; i < n; i++)
    {

        cin >> k >> l;
        if (k <= l)
            temp1.push_back({(k * 2 > l ? (l - k) : k), k, l});
        sum += min(k, l);
    }


    sort(temp1.begin(), temp1.end());
    int count = temp1.size() - 1;
    for (int i = 0; i < f && count >= 0; i++)
    {
        sum += get<0>(temp1[count]);
        count--;
    }


    cout << sum;

    return 0;
}
