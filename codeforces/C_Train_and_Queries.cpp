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
#include <bits/stdc++.h>

#include <iostream>
typedef unsigned long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    // vector<ll> v;
    for (ll i = 0; i < t; i++)
    {
        ll n, k;
        cin >> n >> k;
        map<ll, vector<ll>> m;

        for (ll j = 0; j < n; j++)
        {
            ll x;
            cin >> x;
            // v.push_back(x);
            try
            {
                m.at(x).push_back(j);
            }
            catch (out_of_range &e)
            {
                vector<ll> q;
                q.push_back(j);
                m[x] = q;
            }
        }

        for (ll j = 0; j < k; j++)
        {
            ll a, b;
            cin >> a >> b;
            try
            {
                m.at(a);
                m.at(b);
                auto k = upper_bound(m[b].begin(), m[b].end(), m[a][0]);
                if (k == m[b].end())
                {
                    cout << "NO\n";
                }
                else
                {
                    cout << "YES\n";
                }
            }
            catch (out_of_range &e)
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}