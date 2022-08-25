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

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cerr.tie(0);
    cout.tie(0);
    cin.tie(0);

    double vp, vd, t, f, c;
    cin >> vp >> vd >> t >> f >> c;

    ull dij = 0;
    double currentMileP = t * vp, timeNeeded;

    if (vd > vp)
    {
        while (1)
        {
            timeNeeded = currentMileP / (vd - vp);
            if ((currentMileP + timeNeeded * vp) < c)
            {
                dij++;
                currentMileP += timeNeeded*vp;
                currentMileP += ((currentMileP)/vd + f)*vp; //time dragon takes to return to cave and straighten his treasure = (currentMileP)/vd + f.
            }
            else
                break;
        }
    }
    cout << dij;

    return 0;
}