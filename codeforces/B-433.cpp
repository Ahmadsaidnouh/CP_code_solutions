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
#include <numeric>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cerr.tie(0);
    cout.tie(0);
    cin.tie(0);
    unsigned long n;
    cin >> n;
    unsigned long arr[n];
    unsigned long sortArr[n];
    unsigned int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr[i] = temp;
        sortArr[i] = temp;
    }

    sort(sortArr, sortArr + n);
    unsigned long long accum[n];
    unsigned long long accumSort[n];
    accum[0] = arr[0];
    accumSort[0] = sortArr[0];

    for (int i = 1; i < n; i++)
    {
        accum[i] = accum[i - 1] + arr[i];
        accumSort[i] = accumSort[i - 1] + sortArr[i];
    }

    unsigned long m;
    cin >> m;
    unsigned long long res[m] = {0};
    unsigned long type, l, r;

    for (int i = 0; i < m; i++)
    {
        cin >> type >> l >> r;

        if (type == 1)
        {
            if (l == 1)
            {
                res[i] = accum[r - 1];
            }
            else
            {

                res[i] = accum[r - 1] - accum[l - 2];
            }
            // res[i] = accumulate(arr+(l-1), arr+(r), 0);
        }
        else
        {
            if (l == 1)
            {
                res[i] = accumSort[r - 1];
            }
            else
            {

                res[i] = accumSort[r - 1] - accumSort[l - 2];
            }
        }
    }

    for (int i = 0; i < m - 1; i++)
    {
        cout << res[i] << endl;
    }
    cout << res[m - 1];

    return 0;
}
