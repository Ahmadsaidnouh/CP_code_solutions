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
    string encoded;
    cin >> n >> encoded;

    char decoded[n];
    bool isEven = n % 2 == 0 ? true : false;
    int temp = n % 2 == 0 ? (n / 2 - 1) : n / 2;
    decoded[temp] = encoded[0];
    int index1 = temp - 1;
    int index2 = temp + 1;
    int i = 1;

    if (isEven)
    {

        while (index1 >= 0 || index2 < n)
        {
            if (index2 < n)
            {
                decoded[index2++] = encoded[i++];
            }
            if (index1 >= 0)
            {
                decoded[index1--] = encoded[i++];
            }
        }
    }
    else
    {

        while (index1 >= 0 || index2 < n)
        {
            if (index1 >= 0)
            {
                decoded[index1--] = encoded[i++];
            }
            if (index2 < n)
            {
                decoded[index2++] = encoded[i++];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << decoded[i];
    }

    return 0;
}
