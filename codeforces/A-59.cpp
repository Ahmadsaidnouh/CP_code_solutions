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
    string word;
    cin >> word;

    int lowerCount = 0;
    int upperCount = 0;


    char lowerTemp, upperTemp; 
    for (int i = 0; word[i]; i++)
    {
        lowerTemp = tolower(word[i]);
        upperTemp = toupper(word[i]);

        if (lowerTemp == word[i])
            lowerCount++;
        else if (upperTemp == word[i])
            upperCount++;
    }

    if(lowerCount >= upperCount)
    {
        for (int i = 0; word[i]; i++)
        {
            word[i] = tolower(word[i]);
        }
        
    }
    else {
        for (int i = 0; word[i]; i++)
        {
            word[i] = toupper(word[i]);
        }
    }
    
    cout << word;

    return 0;
}

