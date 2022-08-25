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
    int y, w;

    cin >> y >> w;

    int max = y;

    if(w > max)
        max = w;

    int d = 6 - max + 1;

    int numer, deno; 
    switch (d)
    {
    case 1:
        numer = 1;
        deno = 6;
        break;
    case 2:
        numer = 1;
        deno = 3;
        break;
    case 3:
        numer = 1;
        deno = 2;
        break;
    case 4:
        numer = 2;
        deno = 3;
        break;
    case 5:
        numer = 5;
        deno = 6;
        break;
    case 6:
        numer = 1;
        deno = 1;
        break;
    default:
        numer = 0;
        deno = 1;
        break;
    }

    cout << numer << "/" << deno;
    

    return 0;
}
