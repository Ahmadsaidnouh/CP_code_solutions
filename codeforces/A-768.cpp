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

    int strength[n];

    for (int i = 0; i < n; i++)
    {
        cin >> strength[i];
    }

    if (n < 3)
    {
        cout << 0;
    }
    else
    {

        bool lowerExists;
        bool higherExists;
        int res = 0;
        int min = strength[0];
        int max = strength[0];
        for (int j = 0; j < n; j++)
        {
            if (min > strength[j])
                min = strength[j];
            else if (max < strength[j])
                max = strength[j];
        }
        for (int i = 0; i < n; i++)
        {
            if (strength[i] > min && strength[i] < max)
                res++;
        }

        cout << res;
    }
    return 0;
}
