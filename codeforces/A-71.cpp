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

    string words[n];

    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(words[i].length() > 10)
        {
            words[i] = words[i][0] + to_string(words[i].length() - 2) + words[i][words[i].length() - 1];
        }
        cout << words[i] << endl;
    }
    
    
    

    return 0;
}
