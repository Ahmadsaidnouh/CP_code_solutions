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

    unsigned long long n, m, xc, yc, k;
    cin >> n >> m >> xc >> yc >> k;

    vector<pair<long long, long long>> v(k);
    // cout << v.size() << "***\n";

    // v.resize(k);
    // v.shrink_to_fit();

    long long x, y;

    unsigned long long steps = 0;
    unsigned long long stepX, stepY, mini;

    for (int i = 0; i < k; i++)
    {
        cin >> x >> y;
        if (x == 0 && y == 0)
            continue;
        // cout  << "xc = " << xc << " yc = " << yc << " x = " << x << " y = " << y << " steps "<<steps << endl;
        stepX = 0;
        stepY = 0;
        if (x > 0)
        {
            stepX = ((n - xc) / x);
            // cout << "case1x " << stepX << endl;
            // xc += stepX;
        }
        else if (x < 0)
        {
            x *= -1;
            stepX = ((xc - 1) / x);
            // cout << "case2x " << stepX << endl;
            x *= -1;
            // xc -= stepX;
        }
        if (y > 0)
        {
            stepY = ((m - yc) / y);
            // cout << "case1y " << stepY << endl;
            // yc += stepY;
        }
        else if (y < 0)
        {
            y *= -1;
            stepY = ((yc - 1) / y);
            // cout << "case2y " << stepY << endl;
            y *= -1;
            // yc -= stepY;
        }

        mini = min(stepX, stepY);
        if (x == 0)
        {
            steps += stepY;
            if (y > 0)
            {
                yc += stepY * y;
            }
            else if (y < 0)
            {
                yc += stepY * y;
            }
        }
        else if (y == 0)
        {
            steps += stepX;
            if (x > 0)
            {
                xc += stepX * x;
            }
            else if (x < 0)
            {
                xc += stepX * x;
            }
        }
        else
        {

            steps += mini;
            if (x > 0)
            {
                xc += mini * x;
            }
            else if (x < 0)
            {
                xc += mini * x;
            }
            if (y > 0)
            {
                yc += mini * y;
            }
            else if (y < 0)
            {
                yc += mini * y;
            }
        }
        // v[i] = {x, y};
    }
    // for (auto x : v)
    // {
    //     cout << x.first << " " <<  x.second;
    // }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     x = v[i].first;
    //     y = v[i].second;

    // if (x == 0 && y == 0)
    //     continue;
    // // cout  << "xc = " << xc << " yc = " << yc << " x = " << x << " y = " << y << " steps "<<steps << endl;
    // stepX = 0;
    // stepY = 0;
    // if (x > 0)
    // {
    //     stepX = ((n - xc) / x);
    //     // cout << "case1x " << stepX << endl;
    //     // xc += stepX;
    // }
    // else if (x < 0)
    // {
    //     x *= -1;
    //     stepX = ((xc - 1) / x);
    //     // cout << "case2x " << stepX << endl;
    //     x *= -1;
    //     // xc -= stepX;
    // }
    // if (y > 0)
    // {
    //     stepY = ((m - yc) / y);
    //     // cout << "case1y " << stepY << endl;
    //     // yc += stepY;
    // }
    // else if (y < 0)
    // {
    //     y *= -1;
    //     stepY = ((yc - 1) / y);
    //     // cout << "case2y " << stepY << endl;
    //     y *= -1;
    //     // yc -= stepY;
    // }

    // mini = min(stepX, stepY);
    // if (x == 0)
    // {
    //     steps += stepY;
    //     if (y > 0)
    //     {
    //         yc += stepY * y;
    //     }
    //     else if (y < 0)
    //     {
    //         yc += stepY * y;
    //     }
    // }
    // else if (y == 0)
    // {
    //     steps += stepX;
    //     if (x > 0)
    //     {
    //         xc += stepX * x;
    //     }
    //     else if (x < 0)
    //     {
    //         xc += stepX * x;
    //     }
    // }
    // else
    // {

    //     steps += mini;
    //     if (x > 0)
    //     {
    //         xc += mini * x;
    //     }
    //     else if (x < 0)
    //     {
    //         xc += mini * x;
    //     }
    //     if (y > 0)
    //     {
    //         yc += mini * y;
    //     }
    //     else if (y < 0)
    //     {
    //         yc += mini * y;
    //     }
    // }

    // cout  << "xc = " << xc << " yc = " << yc<< " x = " << x << " y = " << y << " stepX = " << stepX << " stepy = " << stepY << " steps "<<steps <<  endl;
    // xc += stepX;
    // while ((x + xc >= 1) && (x + xc <= n) && (y + yc >= 1) && (y + yc <= m))
    // {
    //     steps++;
    //     xc += x;
    //     yc += y;
    // }
    // }
    cout << steps;
    return 0;
}