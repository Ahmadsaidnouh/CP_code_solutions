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
    string s;
    cin >> s;
    string temp = "";
    string tempArray[51];
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == '+')
        {
            // temp = temp + s[i];
            tempArray[count++] = temp;
            temp = "";
        }
        else if (i == s.length()-1)
        {
            // temp = temp + s[i] + "+";
            temp = temp + s[i];
            tempArray[count++] = temp;
        }
        else
        {
            temp = temp + s[i];
        }
    }
    bool sorted = false;
    int last = count -1;

    // int last = sizeof(tempArray)/sizeof(tempArray[0]);
    
    for (int i = 0; (i < last) && !sorted; i++)
    {
        // cout << tempArray[i] << "\n";
        sorted = true;
        for (int j = last; j > i; j--)
        {
            if (stof(tempArray[j-1]) > stof(tempArray[j]))
            {
                temp = tempArray[j];
                tempArray[j] = tempArray[j-1];
                tempArray[j-1] = temp;
                sorted = false;
            }
        }
    }
    string result = "";
    for (int i = 0; i < count-1; i++)
    {
        result = result + tempArray[i] + "+";
        // cout << tempArray[i] << "\n";
        // sorted = true;
    }
    result = result + tempArray[count-1];
    cout << result;
    return 0;
}
