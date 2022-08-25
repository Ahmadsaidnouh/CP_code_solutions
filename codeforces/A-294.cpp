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
    int birds[n];
    for (int i = 0; i < n; i++)
    {
        cin >> birds[i];
    }
    int m;
    cin >> m;
    int x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        birds[x-2] += y - 1;
        birds[x] += birds[x - 1] - y;
        birds[x - 1] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout << birds[i] << endl;
    }
    return 0;
}
