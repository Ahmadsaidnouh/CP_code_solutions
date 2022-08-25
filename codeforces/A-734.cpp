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
    string result;
    cin >> n >> result;
    int count = 0;
    string tester = "AD";
    int antonScore = 0;
    int danikScore = 0;
    if (n == result.length())
    {
        while (result[count])
        {
            if (result[count] == tester[0])
                antonScore++;
            else if (result[count] == tester[1])
                danikScore++;
            else
            {
                cout << "Error: invalid input";
                return 1;
            }
            count++;
        }

        if (antonScore > danikScore)
            cout << "Anton";
        else if (danikScore > antonScore)
            cout << "Danik";
        else
            cout << "Friendship";
    }
    else
        cout << "Error: invalid input";
    return 0;
}
