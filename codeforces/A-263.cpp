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
#include <cstdlib>
using namespace std;

int main()
{
    int num;
    int onezR, onezC;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> num;
            if (num == 1)
            {
                onezR = i;
                onezC = j;
            }
        }
    }
    
    int movesX = abs(onezC - 3);
    int movesY = abs(onezR - 3);
    int totalMoves = movesX + movesY;

    cout << totalMoves;

    return 0;
}
