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
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cerr.tie(0);
    cout.tie(0);
    cin.tie(0);
    unsigned int n, k;
    cin >> n >> k;

    unsigned long h[n];
    unsigned long acc[n];
    bool test = true;
    unsigned long min = 0;
    unsigned long sum = 0;
    unsigned long res = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
        if (i == 0)
        {
            acc[0] = h[0];
        }
        else
        {
            acc[i] = h[i] + acc[i - 1];
        }

        if (test)
            if (i > 0 && h[i] != h[i - 1])
                test = false;
    }
    if (test || n == k)
    {
        cout << 1;
    }
    else
    {

        min = acc[k - 1];
        for (int i = 1; i < n - k + 1; i++)
        {
            sum = acc[i + k - 1] - acc[i - 1];
            if (sum < min)
            {
                min = sum;
                res = i + 1;
            }
        }

        cout << res;
    }
    

    return 0;
}
