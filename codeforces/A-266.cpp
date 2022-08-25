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
    string stones;
    cin >> stones;
    char temp[stones.length() + 1];
    for (int i = 0; i < stones.length() + 1; i++)
    {
        temp[i] = 0;
    }
    
    int count = 1;

    temp[0] = stones[0];

    for (int i = 1; i < stones.length(); i++)
    {
        if(temp[count - 1] != stones[i])
        {
            temp[count] = stones[i];
            count++;
        }
        
    }
    temp[count] = '\0';
    string t = temp;
    cout << (stones.length() - t.length());

    return 0;
}

