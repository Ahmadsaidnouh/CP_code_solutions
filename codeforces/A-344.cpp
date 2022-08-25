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

    string word[n];
    for (int i = 0; i < n; i++)
    {
        cin >> word[i];
    }

    int sumAttatch = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (word[i] != word[i + 1])
            sumAttatch++;
    }

    cout << sumAttatch;
    return 0;
}

