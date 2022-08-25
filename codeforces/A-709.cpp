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
    unsigned int n, b, d;
    cin >> n >> b >> d;

    unsigned int sizes[n];
    unsigned int sumSizes = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> sizes[i];
        if(sizes[i] <= b)
        {
            sumSizes += sizes[i];
        }

        if(sumSizes > d)
        {
            count++;
            sumSizes = 0;
        }


    }

    cout << count;

    
    return 0;
}
