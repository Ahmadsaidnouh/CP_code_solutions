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
    int n, m;
    cin >> n >> m;
    int arr[m][2];

    for (int i = 0; i < m; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }

    bool sorted = false;
    int last = m - 1;
    int temp1, temp2;
    for (int i = 0; (i < last) && !sorted; i++)
    {
        sorted = true;
        for (int j = last; j > i; j--)
            if (arr[j - 1][1] < arr[j][1])
            {
                temp1 = arr[j][0];
                temp2 = arr[j][1];
                arr[j][0] = arr[j - 1][0];
                arr[j][1] = arr[j - 1][1];
                arr[j - 1][0] = temp1;
                arr[j - 1][1] = temp2;
                sorted = false;
            }
    }

    int sumBox;
    unsigned long long sumValues;
    sumBox = 0;
    sumValues = 0;
    for (int j = 0; j < m; j++)
    {
        if (sumBox + arr[j][0] <= n)
        {
            sumBox += arr[j][0];
            sumValues += arr[j][0] * arr[j][1];
        }
        else
        {
            sumValues += (n - sumBox) * arr[j][1];
            break;
        }
    }

    cout << sumValues;

    return 0;
}
