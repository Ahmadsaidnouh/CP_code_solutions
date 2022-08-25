#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ull n;
    cin >> n;
    ll claw[n];

    for (int i = 0; i < n; i++)
    {
        cin >> claw[i];
    }

    ll temp[n] = {0}, x;

    for (int i = 1; i < n; i++)
    {
        x = i - claw[i];
        if (x < 0)
            x = 0;
        temp[x]++;
        temp[i]--;
        // temp[i] = i - claw[i];
    }
    ll sum = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        sum += temp[i];
        if(sum == 0)
            res++;
        temp[i] = sum;
    }

    

    


    // for (int i = 1; i < n; i++)
    // {
    //     cout << "j = " << (i-1) << " eq = " << (i - claw[i]) << " ans = " << ((i-1) >= (i - claw[i])) << endl;
    //     if((i-1) >= (i - claw[i]))
    //         res--;
    // }

    cout << res; 

    return 0;
}