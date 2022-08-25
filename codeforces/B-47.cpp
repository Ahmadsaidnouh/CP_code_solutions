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
#include <algorithm> 

using namespace std;

int main()
{
    string str[3];
        string temp;
    for (int i = 0; i < 3; i++)
    {

        cin >> temp;
        if (temp[1] == '>')
        {
            reverse(temp.begin(), temp.end());
        }
        str[i] = temp;

    }

    if (((str[1][2] == str[0][0]) || (str[1][2] == str[0][2])) && ((str[2][2] == str[0][0]) || (str[2][2] == str[0][2])))
    {
        cout << str[1][0] << str[0][0] << str[0][2];
    }
    else if (((str[1][0] == str[0][0]) || (str[1][0] == str[0][2])) && ((str[2][0] == str[0][0]) || (str[2][0] == str[0][2])))
    {
        cout << str[0][0] << str[0][2] <<  str[1][2];
    }
    else if ((str[1][2] == str[0][2]) && (str[2][0] == str[0][0]) )
    {
        cout << str[0][0] <<  str[1][0] <<str[0][2] ;
    }
    else if ( (str[1][0] == str[0][0]) && (str[2][2] == str[0][2]))
    {
        cout << str[0][0] <<  str[1][2] <<str[0][2] ;
    }
    else {
        cout << "Impossible";
    }
    
     
    

    return 0;
}
