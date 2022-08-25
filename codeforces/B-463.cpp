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
    int height[n];
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }

    unsigned long long money = height[0];
    int energy = 0;
    int temp;
    int inc;

    for (int i = 0; i < n-1; i++)
    {
        temp = energy + (height[i] - height[i+1]);
        if (temp < 0)
        {
            height[i] += abs(temp);
            money += abs(temp);
        }

        energy += (height[i] - height[i+1]);
    }
    
    cout << money;
    

    return 0;
}
