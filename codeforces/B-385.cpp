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
    // std::cout << std::setprecision(10) << std::fixed;

    string str;
    cin >> str;
    ull pos = str.find("bear");
    ull sum = 0, x, y;

    while(pos != string::npos)
    {
        x = pos + 1;
        y = str.size() - x - 2;
        sum += x*y;

        str = str.substr(pos + 1);
        pos = str.find("bear");
    } 
    cout << sum;
    
    return 0;
}