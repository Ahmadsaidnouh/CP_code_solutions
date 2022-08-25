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
    string n;
    cin >> n;

    if (n.length() <= 1)
    {
        cout << 0;
    }
    else {
        unsigned long long temp = 0;
        unsigned long long sum = 0;
        while (n.length() > 1)
        {
            sum++;
            temp = 0;
            for (int i = 0; i < n.length(); i++)
            {
                temp += (n[i] - '0');
            }
            n = to_string(temp);
        }
        cout << sum;
    }   
    

    return 0;
}
