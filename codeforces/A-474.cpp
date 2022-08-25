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
#include <bits/stdc++.h>
using namespace std;

int getCol(char ch)
{
    char key[3][10] = {{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'}, {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'}, {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (ch == key[i][j])
            {
                return j;
            }
        }
        
    }
    
    // int arr[2];
    // if (ch == 'q' || ch == 'w' || ch == 'e' || ch == 'r' || ch == 't' || ch == 'y' || ch == 'u' || ch == 'i' || ch == 'o' || ch == 'p')
    // {
    //     switch (ch)
    //     {
    //     case /* constant-expression */:
    //         /* code */
    //         break;
        
    //     default:
    //         break;
    //     }
    // }
    //     return 0;
    // else if (ch == 'a' || ch == 's' || ch == 'd' || ch == 'f' || ch == 'g' || ch == 'h' || ch == 'j' || ch == 'k' || ch == 'l' || ch == ';')
    //     return 1;
    // else
    //     return 2;
}
int getRow(char ch)
{
    char key[3][10] = {{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'}, {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'}, {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (ch == key[i][j])
            {
                return i;
            }
        }
        
    }
    
    // int arr[2];
    // if (ch == 'q' || ch == 'w' || ch == 'e' || ch == 'r' || ch == 't' || ch == 'y' || ch == 'u' || ch == 'i' || ch == 'o' || ch == 'p')
    // {
    //     switch (ch)
    //     {
    //     case /* constant-expression */:
    //         /* code */
    //         break;
        
    //     default:
    //         break;
    //     }
    // }
    //     return 0;
    // else if (ch == 'a' || ch == 's' || ch == 'd' || ch == 'f' || ch == 'g' || ch == 'h' || ch == 'j' || ch == 'k' || ch == 'l' || ch == ';')
    //     return 1;
    // else
    //     return 2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cerr.tie(0);
    cout.tie(0);
    cin.tie(0);
    char key[3][10] = {{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'}, {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'}, {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'}};
    char dir;
    cin >> dir;

    string str;
    cin >> str;
    int row;
    int col;

    for (int i = 0; i < str.size(); i++)
    {
        row = getRow(str[i]);
        col = getCol(str[i]);
        if (dir == 'R')
        {
            str[i] = key[row][col-1];
        }
        else {

            str[i] = key[row][col+1];
        }


    }
    cout << str;

    return 0;
}
