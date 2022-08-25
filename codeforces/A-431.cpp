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
    int firstCal, secondCal, thirdCal, fourthCal;
    cin >> firstCal >> secondCal >> thirdCal >> fourthCal;

    string sequence;

    cin >> sequence;

    int sumCal = 0;

    for (int i = 0; sequence[i]; i++)
    {
        if(sequence[i] == '1')
            sumCal += firstCal;   
        else if(sequence[i] == '2')
            sumCal += secondCal;   
        else if(sequence[i] == '3')
            sumCal += thirdCal;   
        else if(sequence[i] == '4')
            sumCal += fourthCal;   
    }

    cout << sumCal;
    

    return 0;
}

