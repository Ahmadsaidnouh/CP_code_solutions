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
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cerr.tie(0);
    cout.tie(0);
    cin.tie(0);
    // std::cout << std::setprecision(10) << std::fixed;

    unsigned int n , k;
    cin >> n >> k;

    

    // vector <pair <ll, bool>> v(n);
    // ll temp;

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> temp;
    //     if(temp < 0)
    //     {
    //         v[i] = {temp*-1, false};

    //     }
    //     else
    //         v[i] = {temp, true};

    // }
    
    // // sort(v.rbegin(), v.rend());

    // ll sum = 0;

    // for(auto ele : v)
    // {
    //     // cout << ele.first << " " << ele.second << endl;
    //     if(ele.second == false && k > 0)
    //     {
    //         sum += ele.first;
    //         --k;
    //     }
    //     else if(ele.second == false)
    //     {
    //         sum += (ele.first * -1);
    //     }
    //     else
    //     sum += ele.first;
    // }

    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ull index = 0;

    for (int i = 0; i < k; i++)
    {
        if((index < n-1) && ((arr[index] < 0) && (abs(arr[index + 1]) <= abs(arr[index]))))
        {
                arr[index] *= -1;
                index++;
        }
        else
        {
            arr[index] *= -1;
        }
        // if(index < n - 1)
        // {
        //     if((arr[index] < 0) && (abs(arr[index + 1]) <= abs(arr[index])))
        //     {
        //         arr[index] *= -1;
        //         index++;
        //     }
        //     else if((arr[index] < 0) && (abs(arr[index + 1]) > abs(arr[index])))
        //     {
        //         arr[index] *= -1;
        //     }
        //     else
        //         arr[index] *= -1;
        // }
        // else
        //     arr[index] *= -1;

    }
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    
    
    
    cout << sum;
    
    return 0;
}