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
    int shoes[4];

    cin >> shoes[0] >> shoes[1] >> shoes[2] >> shoes[3];

    int temp[4] = {-1, -1, -1, -1};
    temp[0] = shoes[0];
    int count = 1;
    for (int i = 1; i < 4; i++)
    {
            bool notFount = true;
        for (int j = 0; j < count; j++)
        {
            if(temp[j] == shoes[i])
            {
                notFount = false;
                break;
            }
        }

        if(notFount)
        {
            temp[count++] = shoes[i];
        }
        
    }

    cout << (4 - count);
    

    return 0;
}
