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
    int nn;
    cin >> nn;
    char res[nn];

    char option[7] = {'R', 'O', 'Y', 'G', 'B', 'I', 'V'};
    for (int i = 0; i < 7; i++)
    {
        res[i] = option[i];
    }

    if (nn == 8)
    {
        res[nn-1] = 'G';
    }
    else if (nn == 9)
    {
        res[nn-2] = 'G';
        res[nn-1] = 'B';
    }
    else if (nn >= 10)
    {

        for (int i = 7; i < nn - 3; i++)
        {
            res[i] = option[i % 7];
        }
        for (int i = 0; i < 6; i++)
        {
            char temp = option[i + 1];
            if (res[nn - 4] != temp && res[nn - 5] != temp && res[nn - 6] != temp)
            {
                res[nn - 3] = temp;
                break;
            }
        }
        for (int i = 0; i < 5; i++)
        {
            char temp = option[i + 2];
            if (res[nn - 3] != temp && res[nn - 4] != temp && res[nn - 5] != temp)
            {
                res[nn - 2] = temp;
                break;
            }
        }
        for (int i = 0; i < 4; i++)
        {
            char temp = option[i + 3];
            if (res[nn - 2] != temp && res[nn - 3] != temp && res[nn - 4] != temp)
            {
                res[nn - 1] = temp;
                break;
            }
        }
    }
    for (int i = 0; i < nn; i++)
    {
        cout << res[i];
    }

    return 0;
}
