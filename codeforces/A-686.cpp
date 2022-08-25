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
    unsigned long long int n,x;
    cin >> n;
    cin >> x;
    string tempStr;
    int tempInt;
    int pass = 0;
    int i = 0;
    while(i < n)
    {
        cin >> tempStr;
        if (tempStr.compare("+") == 0)
        {
            cin >> tempStr;
            tempInt = stoi(tempStr);
            x = x + tempInt;
        }
        else
        {
            cin >> tempStr;
            tempInt = stoi(tempStr);
            if (tempInt <= x)
                x = x - tempInt;
            else
                pass++;
        }
        cout << "x = " << x << endl;
        i++;
    }
    cout << x << " " << pass;
    return 0;
}
