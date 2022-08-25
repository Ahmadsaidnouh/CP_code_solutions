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
    string userName;
    cin >> userName;
    char temp[userName.length() + 1];
    for (int i = 0; i < userName.length() + 1; i++)
    {
        temp[i] = 0;
    }
    
    int count = 0;

    for (int i = 0; i < userName.length(); i++)
    {
        bool isIncluded = false;
        for (int j = 0; temp[j]; j++)
        {
            if(temp[j] == userName[i])
            {
                isIncluded = true;   
                break;
            }
        }
        
        if(!isIncluded)
        {
            temp[count++] = userName[i];
        }
    }
    if (count % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}

