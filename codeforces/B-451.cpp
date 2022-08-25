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
    unsigned int n;
    cin >> n;
    unsigned long long arr[n];
    bool isAsending = true;
    bool isDesending = false;
    unsigned int des = 0;
    bool firstTime1 = true;
    bool firstTime2 = true;
    unsigned int a = 0, b = 0;

    for (unsigned int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i > 0 && isAsending && arr[i] < arr[i - 1])
        {
            des++;
            isDesending = 1;
            isAsending = 0;
            if (firstTime1)
            {
                a = i;
                firstTime1 = false;
            }
        }
        if (i > 0 && isDesending && arr[i] > arr[i - 1])
        {
            isDesending = 0;
            isAsending = 1;
            if (firstTime2)
            {
                b = i;
                firstTime2 = false;
            }
        }
    }
    // cout << "des = " << des << endl;
    if (des == 0)
    {
        // a = 1;
        // b = 1;
        cout << "yes\n"
             << "1 1";
    }
    else if (des == 1)
    {
        // if (a == 1 && b == 0)
        if (b < a && b == 0)
        {
            b = n;
        }
        if (b < n && arr[a - 1] > arr[b])
        {
            cout << "no";
        }
        else if (a > 1 && arr[a - 2] > arr[b - 1])
        {
            // cout << arr[a-2] << " " << arr[b-1] << endl;
            cout << "no";
        }
        else
        {
            cout << "yes\n"
                 << a << " " << b;
        }
    }
    else
        cout << "no";

    return 0;
}
