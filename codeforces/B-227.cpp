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

int findMe(int arr[], int start, int end, int target)
{
    if (start > end)
    {
        return -1;
    }

    int middle = (start + end) / 2;
    if (arr[middle] == target)
    {
        return middle;
    }
    else if (arr[middle] > target)
    {
        return findMe(arr, start, middle - 1, target);
    }
    else 
    {
        return findMe(arr, middle + 1, end, target);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(b,b+m);
    unsigned long long sum1 = 0;
    unsigned long long sum2 = 0;
    int *foo;
    int dist;
    int index = 0;
    int position;
    for (int i = 0; i < n && index <m; i++)
    {
        position = findMe(b, 0, m-1, a[i]);
        if (position != -1)
        {
            index++;
            sum1 += (i + 1);
            sum2 += (n - i);

        }
        int x = position;

        while (x < m-1 && b[x] == b[x+1])
        {
            index++;
            x++;
            sum1 += (i + 1);
            sum2 += (n - i);

        }
        x=position;
        while (x > 0 && b[x] == b[x-1])
        {
            index++;
            x--;
            sum1 += (i + 1);
            sum2 += (n - i);

        }

    }

    if (index != m)
    {
        sum1 += n*index;
        sum2 += n*index;

    }

    cout << sum1 << " " << sum2;

    return 0;
}
