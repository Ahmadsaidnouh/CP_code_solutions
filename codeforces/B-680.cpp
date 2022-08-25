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
    int n, a;

    cin >> n >> a;
    a--;
    int criminalArr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> criminalArr[i];
    }

    int left = a - 1;
    int right = a + 1;

    int crim = 0;

    if (criminalArr[a] == 1)
        crim++;
    while ((left >= 0) || (right < n))
    {
        if ((left >= 0) && (right < n))
        {
            if ((criminalArr[left] == 1) && (criminalArr[right] == 1))
            {
                crim += 2;
            }
        }
        else if ((left >= 0) && (criminalArr[left] == 1))
        {
            crim++;
        }
        else if ((right < n) && (criminalArr[right] == 1))
        {
            crim++;
        }

        left--;
        right++;
    }

    cout << crim;

    return 0;
}
