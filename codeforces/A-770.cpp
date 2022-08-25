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
    int n, k;
    cin >> n;
    cin >> k;

    char newPassword[n + 1];
    int count = 0;

    int ch;
    for (int i = 0; i < n / k; i++)
    {
        ch = 97;
        for (int i = 0; i < k; i++)
        {
            newPassword[count++] = ch++;
        }
    }
    ch = 97;
    for (int i = 0; i < n%k; i++)
    {
        newPassword[count++] = ch++;
    }

    newPassword[n] = 0;
    cout << newPassword;

    return 0;
}
