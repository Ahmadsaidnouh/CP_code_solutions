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
using namespace std;

int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    int aLen = a.length();
    int bLen = b.length();
    int res;

    if (aLen == bLen && a == b)
    {
        res = -1;
    }
    else
    {
        res = aLen > bLen ? aLen : bLen;
    }
    cout << res;

    return 0;
}
