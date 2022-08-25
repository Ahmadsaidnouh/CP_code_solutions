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
    int n;
    cin >> n;
    int talentArray[n];
    int temp;
    int firstTalentCount = 0;
    int secondTalentCount = 0;
    int thirdTalentCount = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 1)
            firstTalentCount++;
        else if (temp == 2)
            secondTalentCount++;
        else if (temp == 3)
            thirdTalentCount++;

        talentArray[i] = temp;
    }

    int min = firstTalentCount;
    if (min > secondTalentCount)
        min = secondTalentCount;
    if (min > thirdTalentCount)
        min = thirdTalentCount;

    int w = min;

    cout << w << endl;
    
    if (w == 0) return 0;
    
    int firstTalentIndex = 0;
    int secondTalentIndex = 0;
    int thirdTalentIndex = 0;

    int resultArray[w][3];
    
    for (int i = 0; i < w; i++)
    {
        int m;
        for (m = firstTalentIndex; m < n; m++)
        {
            if (talentArray[m] == 1)
            {
                resultArray[i][0] = m + 1;
                firstTalentIndex = ++m;
                break;
            }
        }
        for (m = secondTalentIndex; m < n; m++)
        {
            if (talentArray[m] == 2)
            {
                resultArray[i][1] = m + 1;
                secondTalentIndex = ++m;
                break;
            }
        }
        for (m = thirdTalentIndex; m < n; m++)
        {
            if (talentArray[m] == 3)
            {
                resultArray[i][2] = m + 1;
                thirdTalentIndex = ++m;
                break;
            }
        }
    }

    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << resultArray[i][j] << " ";
        }
        cout << "\n";        
    }
    
    return 0;
}
