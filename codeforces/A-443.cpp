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
    string letters;
    getline(cin, letters);

    char temp[letters.length()];

    for (int i = 0; i < letters.length(); i++)
    {
        temp[i] = 0;
    }
    int count = 0;
    for (int i = 1; letters[i]; i++)
    {
        if(letters[i] >= 'a' && letters[i] <= 'z')
        {
            string tempo = temp;
            if(tempo.find(letters[i]) == string::npos)
            {
                temp[count++] = letters[i];
            }
        }
    }  

    cout << count;

    return 0;
}
