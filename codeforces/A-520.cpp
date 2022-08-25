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

    string str;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        str[i] = tolower(str[i]);
    }

    int charArr[26] = {0};
    
    if (n < 26)
    {
        cout << "NO";
    }
    else
    {
        bool isValid = true;
        int temp;
        for (int i = 0; i < n; i++)
        {
            temp = str[i] - 97;
            charArr[str[i] - 97] = 1;
        }

        for (int i = 0; i < 26; i++)
        {
            if (charArr[i] == 0)
            {
                isValid = false;
                break;
            }
        }

        if (isValid)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}
