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
    unsigned long n;

    string str;
    cin >> n >> str;

    // cout << "Initial string: " << str << endl;

    str.erase(remove(str.begin(), str.end(), '0'), str.end()); // remove 0 from string
    str.erase(remove(str.begin(), str.end(), '1'), str.end()); // remove 1 from string

    // cout << "Final string: " << str;

    // string temp_str[str.length()];

    string res = "";
    // unsigned int digits_count[8] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '4')
        {
            // cout << "case1*";
            // digits_count[0] += 2;
            // ++digits_count[1];
            res += "322";
        }
        // temp_str[i] = "322";
        else if (str[i] == '6')
        {
            // cout << "case2*";
            // ++digits_count[3];
            // ++digits_count[1];

            res += "53";
        }
        // temp_str[i] = "53";
        else if (str[i] == '8')
        {
            // cout << "case3*";
            // ++digits_count[5];
            // digits_count[0]+= 3;

            res += "7222";
        }
        // temp_str[i] = "7222";
        else if (str[i] == '9')
        {
            // cout << "case4*";
            // ++digits_count[5];
            // digits_count[1] += 2;
            // ++digits_count[0];

            res += "7332";
        }
        // temp_str[i] = "7332";
        else
        {
            // cout << "case5*";
            // if (str[i] == '2')
            //     ++digits_count[0];
            // else if (str[i] == '3')
            //     ++digits_count[1];
            // else if (str[i] == '5')
            //     ++digits_count[3];
            // else if (str[i] == '7')
            //     ++digits_count[5];
            res += str[i];
        }

        // temp_str[i] = str[i];
    }
    // int index = 0;
    // string tempo = ""; 
    // for (int i = 7; i >= 0; --i)
    // {
    //     for (int j = 0; j < digits_count[i]; j++)
    //     {
    //         tempo += to_string(i+2);
    //     }
        
    // }
    sort(res.begin(),res.end()) ;
    reverse(res.begin(),res.end()) ;
    cout << res;

    return 0;
}
