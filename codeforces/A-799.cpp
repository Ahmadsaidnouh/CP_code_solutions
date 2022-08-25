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
    int n, t, k, d;
    cin >> n >> t >> k >> d;

    float fn = n, fk = k;

    int path1 = ceil(fn/fk)*t;

    int count = 0;
    n -= k;
    int turn1 = t + 1, turn2 = -1;
    bool work = true;
    bool isNeeded = true;
    while (turn1 >= 1 || turn2 >= 1)
    {
        count++;
        if (turn1 == 1 && n > 0)
        {
            turn1 = t;
            n -= k;
            if(n <= 0)
                isNeeded = false;
        }
        else
        {
            turn1--;
        }

        if (count > d )
        {
            if(work && isNeeded)
            {
                turn2 = t + 1;
                n -= k;
            }
            if (turn2 == 1 && n > 0)
            {
                turn2 = t;
                n -= k;
            }
            else
            {
                turn2--;
            }
            work = false;
        }
        // cout << "--> " << count << " " << turn1 << " " << turn2 << " " << n << endl;
    }


    int path2 = count - 1;

    if(path1 <= path2)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}
