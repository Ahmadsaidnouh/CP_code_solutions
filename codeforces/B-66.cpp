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
    int heights[n];
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }
    int max = 0;
    int left, right;
    for (int i = 0; i < n; i++)
    {
        left = 0;
        right = 0;
        for (int j = i; j > 0; --j)
        {
            if (heights[j] >= heights[j - 1])
                left++;
            else
                break;
        }
        for (int k = i; k < n - 1; k++)
        {
            if (heights[k] >= heights[k + 1])
                right++;
            else
                break;
        }

        temp = left + right + 1;
        max = temp > max ? temp : max;
    }

    cout << max;

    return 0;
}
