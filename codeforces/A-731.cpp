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
    string name;
    cin >> name;

    int differ;
    int sumRot;

    differ = abs('a' - name[0]);
    if (differ <= 13)
    {
        sumRot += differ;
    }
    else
    {
        sumRot += 26 - differ;
    }

    for (int i = 0; i < name.length() - 1; i++)
    {
        differ = abs(name[i] - name[i + 1]);
        if (differ <= 13)
        {
            sumRot += differ;
        }
        else
        {
            sumRot += 26 - differ;
        }
    }

    cout << sumRot;

    return 0;
}
