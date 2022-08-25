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
    int r, c;
    cin >> c;
    int num[c];

    for (int i = 0; i < c; i++)
    {
        cin >> num[i];
    }

    bool isManipulated = true;
    while (isManipulated)
    {
        isManipulated = false;
        for (int i = c - 1; i > 0; i--)
        {
            int diff = num[i - 1] - num[i];
            if (diff > 0)
            {
                isManipulated = true;
                num[i] += diff;
                num[i - 1] -= diff;
            }
        }
    }

    for (int i = 0; i < c; i++)
    {
        cout << num[i] << " ";
    }
    return 0;
}
