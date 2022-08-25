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
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cerr.tie(0);
    cout.tie(0);
    cin.tie(0);

    unsigned n;
    cin >> n;
    set<unsigned long long> s;
    auto it = s.begin();
    unsigned long long temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        it = s.emplace_hint(it, temp);
    }

    if (s.size() == 1 || s.size() == 2)
    {
        cout << "YES";
    }
    else if (s.size() == 3)
    {
        auto itt = s.begin();
        unsigned long long temp1 = *itt;
        itt++;
        unsigned long long temp2 = *itt;
        itt++;
        unsigned long long temp3 = *itt;

        if ((temp1 + temp3) / 2.0 == temp2)
        {
            cout << "YES";
        }
        else
            cout << "NO";
    }
    else
        cout << "NO";

    return 0;
}

/*
             ██
            ████
           ██  ██      
          ████████
         ██      ██
        ██        ██  
       submitedd by :)
        ███╗░░░███╗░█████╗░░██████╗████████╗░█████╗░███████╗░█████╗░
        ████╗░████║██╔══██╗██╔════╝╚══██╔══╝██╔══██╗██╔════╝██╔══██╗
        ██╔████╔██║██║░░██║╚█████╗░░░░██║░░░███████║█████╗░░███████║
        ██║╚██╔╝██║██║░░██║░╚═══██╗░░░██║░░░██╔══██║██╔══╝░░██╔══██║
        ██║░╚═╝░██║╚█████╔╝██████╔╝░░░██║░░░██║░░██║██║░░░░░██║░░██║
        ╚═╝░░░░░╚═╝░╚════╝░╚═════╝░░░░╚═╝░░░╚═╝░░╚═╝╚═╝░░░░░╚═╝░░╚═╝
      //Don't wish for it  Work for it
*/