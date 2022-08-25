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
    string str1, str2;
    cin >> str1 >> str2;

    int count = 0;
    while (str1[count])
    {
        str1[count] = tolower(str1[count]);
        count++;
    }
    count = 0;
    while (str2[count])
    {
        str2[count] = tolower(str2[count]);
        count++;
    }
    int res = str1.compare(str2);
    if (res == 0)
        cout << 0;
    else if (res < 0)
        cout << -1;
    else
        cout << 1;
    return 0;
}
