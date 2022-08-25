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
    std::cout << std::setprecision(12) << std::fixed;
    unsigned int n, m, k;
    cin >> n;
    unsigned x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    cin >> m;
    unsigned y[m];
    for (int i = 0; i < m; i++)
    {
        cin >> y[i];
    }
    cin >> k;
    unsigned z[k];
    for (int i = 0; i < k; i++)
    {
        cin >> z[i];
    }

    unsigned a, b;
    cin >> a >> b;

    double r1 = *max_element(x, x+n);
    double p1 = *max_element(y, y+m);
    double p2 = *min_element(z, z+k);

    double r2 = sqrt((r1*r1)/((a*p2)/(b*p1) + 1));

    cout << r2;


    

    return 0;
}