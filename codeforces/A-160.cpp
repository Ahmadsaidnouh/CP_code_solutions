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
    int n;
    cin >> n;
    int values[n];
    int sum = 0;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
        values[i] = temp;;
    }

    sort(values, values+n);
    
    int res = 0;
    int me = 0;
    int he;

    for (int i = n-1; i >= 0; --i)
    {
        res++;
        me += values[i];
        he = sum - me;
        if(me > he)
        break;
    }

    cout << res;
    

    
    return 0;
}
