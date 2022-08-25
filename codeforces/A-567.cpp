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

    int res[n][2];
    int coord[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coord[i];
    }

    int min, max;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            res[i][0] = abs(coord[1] - coord[0]);
            res[i][1] = abs(coord[n-1] - coord[0]);
        }
        else if (i == n-1)
        {
            res[i][0] = abs(coord[n-2] - coord[n-1]);
            res[i][1] = abs(coord[0] - coord[n-1]);

        }
        else 
        {
            res[i][0] = abs(coord[i] - coord[i-1]) < abs(coord[i] - coord[i+1]) ? abs(coord[i] - coord[i-1]) : abs(coord[i] - coord[i+1]);
            res[i][1] = abs(coord[i] - coord[0]) > abs(coord[i] - coord[n-1]) ? abs(coord[i] - coord[0]) : abs(coord[i] - coord[n-1]);

        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << res[i][0] << " " << res[i][1] << "\n";
    }
    
    
    return 0;
}
