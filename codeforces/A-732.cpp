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
    int k, r;
    cin >> k >> r;

    if (k < 10 && k <= r && (r%k == 0))
    {
        cout << (r / k);
    }
    else
    {
        int count = 1;

        for (int i = 0;; i++)
        {
            int val1 = (count * k) % 10;
            int val2 = (count * k - r ) % 10;
            if (val1 == 0 || val2 == 0)
                break;
            else
                count++;
        }
        cout << count;
    }

    return 0;
}
