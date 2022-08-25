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
    int n, m;
    char c;
    int firstR, firstC, lastR, lastC;
    bool firstTime = true;
    cin >> n >> m >> c;
    char arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (firstTime && arr[i][j] == c)
            {
                firstR = i;
                firstC = j;
                firstTime = false;
            }
            if (arr[i][j] == c)
            {
                lastR = i;
                lastC = j;
            }
        }
    }

    int temp[26] = {0};
    int count1 = 0;
    for (int i = firstR - 1; i <= lastR + 1; i++)
    {
        for (int j = firstC; j <= lastC; j++)
        {
            if (i >= 0 && i < n && j >= 0 && j < m)
            {
                if (arr[i][j] != '.' && temp[(int)arr[i][j] - 65] == 0)
                {
                    count1++;
                    temp[(int)arr[i][j] - 65] = 1;
                }
            }
        }
    }
    for (int i = firstR; i <= lastR; i++)
    {
        for (int j = firstC-1; j <= lastC+1; j++)
        {
            if (i >= 0 && i < n && j >= 0 && j < m)
            {
                if (arr[i][j] != '.' && temp[(int)arr[i][j] - 65] == 0)
                {
                    count1++;
                    temp[(int)arr[i][j] - 65] = 1;
                }
            }
        }
    }

    cout << (count1 - 1);

    return 0;
}
