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
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n] = {0};

    int snacks[n];

    for (int i = 0; i < n; i++)
    {
        cin >> snacks[i];
    }

    int temp = n;
    int stkTop;

    for (int i = 0; i < n; i++)
    {
        arr[snacks[i] - 1] = 1;
        if (snacks[i] == temp)
        {
            for (int j = snacks[i] - 1; (arr[j] != 0) && (j >= 0); j--)
            {
                cout << j + 1 << " ";
                temp--;
            }

            if (i != n - 1)
                cout << "\n";
        }
        else
        {
            cout << "\n";
        }
    }

    return 0;
}
