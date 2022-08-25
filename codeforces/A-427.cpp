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
    int n;
    cin >> n;
    
    int events[n];

    for (int i = 0; i < n; i++)
    {
        cin >> events[i];
    }
    
    int sumUntreated = 0;
    int sumAvailablePolice = 0;

    for (int i = 0; i < n; i++)
    {
        if (events[i] != -1)
        {
            sumAvailablePolice += events[i];
        }
        else if(events[i] == -1)
        {
            if(sumAvailablePolice > 0)
            {
                sumAvailablePolice--;
            }
            else
            {
                sumUntreated++;
            }
        }
    }

    cout << sumUntreated;

    return 0;
}

