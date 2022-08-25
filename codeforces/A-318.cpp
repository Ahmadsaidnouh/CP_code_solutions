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
#include <cmath>
using namespace std;

int main()
{
    unsigned long long n, k;
    cin >> n >> k;
    unsigned long long mid  = ceil(n/2.0);
    // cout << "mid = "<<  mid << endl;
    if (k <= mid)
    {
        cout << 2*k-1;
        
    }
    else {
        cout << 2*(k-mid);
    }
    // unsigned long long count = 0;
    // bool isFound = false;
    // for (int i = 1; i <= n; i += 2)
    // {
    //     count++;
    //     if (count == k)
    //     {
    //         cout << i;
    //         isFound = true;
    //         break;
    //     }
    // }
    // if (!isFound)
    //     for (int i = 2; i <= n; i += 2)
    //     {
    //         count++;
    //         if (count == k)
    //         {
    //             cout << i;
    //             isFound = true;
    //             break;
    //         }
    //     }

    return 0;
}
