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
    int res[n] = {0};
    int xCount;
    cin >> xCount;
    // cout << "xcout = " << xCount << endl;
    int temp;
    int cn = 0;
    int x[xCount];
    for (int i = 0; i < xCount; i++)
    {
        cin >> temp;
        if(res[temp-1] != 1)
        {
            res[temp-1] = 1;
            cn++;
        }
        // cin >> x[i];
    }
    // cout << "x before ==> ";
    // for (int i = 0; i < xCount; i++)
    // {
    //     cout << x[i];
    // }
    // sort(x, x + xCount);
    int yCount;
    cin >> yCount;
    // cout << "ycout = " << yCount << endl;
    int y[yCount];
    // cout << "x before ==> ";
    for (int i = 0; i < yCount; i++)
    {
        cin >> temp;
        if(res[temp-1] != 1)
        {
            res[temp-1] = 1;
            cn++;
        }
        // cin >> y[i];
    }
    if (cn == n)
    {
        cout << "I become the guy.";
    }
    else{
        cout << "Oh, my keyboard!";
    }
    // for (int i = 0; i < yCount; i++)
    // {
    //     cout <<  y[i];
    // }
    // sort(y, y + yCount);


    // int first1 = 0;
    // int last1 = xCount;
    // int first2 = 0;
    // int last2 = yCount;

    // int index = 0;
    // bool isValid = true;
    // // cout << "x ==> ";
    // // for (int i = 0; i < xCount; i++)
    // // {
    // //     cout << x[i] << " ";
    // // }
    
    // // cout << endl;
    // // cout << "y ==> ";
    // // for (int i = 0; i < yCount; i++)
    // // {
    // //     cout << y[i] << " ";
    // // }
    
    // // cout << endl;

    // for (; (first1 < last1) && (first2 < last2); ++index)
    // {
    //     if (x[first1] < y[first2])
    //     {
    //         res[index] = x[first1++];
    //         // cout << "case 1 " << res[index];
    //         if ((index != 0) && (res[index] - res[index - 1] != 1))
    //         {
    //             isValid = false;
    //             break;
    //         }
    //     }
    //     else if (y[first2] < x[first1])
    //     {
    //         res[index] = y[first2++];
    //         // cout << "case 2 " << res[index];
    //         if ((index != 0) && (res[index] - res[index - 1] != 1))
    //         {
    //             isValid = false;
    //             break;
    //         }
    //     }
    //     else
    //     {
    //         res[index] = y[first2++];
    //         first1++;
    //         // cout << "case 3 " << res[index];
    //         if ((index != 0) && (res[index] - res[index - 1] != 1))
    //         {
    //             isValid = false;
    //             break;
    //         }
    //     }
    // }

    // if (isValid)
    // {
    //     for (; first1 < last1; ++index)
    //     {
    //         res[index] = x[first1++];
    //         if ((index != 0) && (res[index] - res[index - 1] != 1))
    //         {
    //             isValid = false;
    //             break;
    //         }
    //     }
    //     if (isValid)
    //     {
    //         for (; first2 < last2; ++index)
    //         {
    //             res[index] = y[first2++];
    //             if ((index != 0) && (res[index] - res[index - 1] != 1))
    //             {
    //                 isValid = false;
    //                 break;
    //             }
    //         }
    //         if (isValid && (index == n))
    //         {
    //             cout << "I become the guy.";
    //         }
    //         else
    //         {
    //             cout << "Oh, my keyboard!";
    //         }
    //     }
    //     else
    //     {
    //         cout << "Oh, my keyboard!";
    //     }
    // }
    // else
    // {
    //     cout << "Oh, my keyboard!";
    // }

    return 0;
}
