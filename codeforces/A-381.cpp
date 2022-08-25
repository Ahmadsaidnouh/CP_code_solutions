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

    int cards[n];

    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }

    int first = 0;
    int last = n - 1;

    int sumSrj = 0;
    int sumDim = 0;

    int turnFlag = 0;
    while (first != last)
    {
        if(cards[first] >= cards[last])
        {
            if(turnFlag % 2 == 0)
                sumSrj += cards[first++];
            else 
                sumDim += cards[first++];

        }
        else 
        {
            if(turnFlag % 2 == 0)
                sumSrj += cards[last--];
            else 
                sumDim += cards[last--];
        }
        
        turnFlag++;
    }

    if(turnFlag % 2 == 0)
        sumSrj += cards[last];
    else 
        sumDim += cards[last];

    cout << sumSrj << " " << sumDim;
    
    
    return 0;
}

