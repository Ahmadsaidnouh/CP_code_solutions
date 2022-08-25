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

    string s1, s2;
    cin >> s1 >> s2;
    std::cout << std::setprecision(12) << std::fixed;
    double sum1 = 0, sum2 = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '+')
            sum1++;
        else
            sum1--;
    }
    int n = 0;
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] == '+')
            sum2++;
        else if (s2[i] == '-')
            sum2--;
        else
            n++;
    }

    if (n == 0)
    {
        if (sum1 == sum2)
        {
            cout << "1.000000000000";
        }
        else
            cout << "0.000000000000";
    }
    else
    {
        double num = 0;
        for (int i = 0; i < pow(2, n); i++)
        {
            char ch[n];
            if (i == 0)
            {
                for (int a = 0; a < n; a++)
                {
                    ch[a] = '0';
                }

                // cout << tem[0] << " " << tem[1] << " " << tem[2] << endl;
            }
            else
            {

                int j = 0;
                int t = i;
                for (int a = 0; a < n; a++)
                {
                    // cout << "j = " <<  << endl;
                    ch[a] = (char)(t % 2 + 48);
                    t /= 2;
                }
                // cout << tem[0] << " " << tem[1] << " "<< tem[2] << endl;
            }
            int cnt = 0;
            for (int b = 0; b < n; b++)
            {
                // cout << tem[b] << "***\n";
                if (ch[b] == '0')
                {
                    cnt--;
                }
                else
                    cnt++;
            }
            // cout << cnt << endl;
            if (sum2 + cnt == sum1)
                num++;
            // cout << i << " ";
        }

        cout << (double)(num/pow(2,n));
    }
    return 0;
}