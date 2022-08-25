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

bool sortbysec(const pair<double, unsigned int> &a, const pair<double, unsigned int> &b)
{
    if (a.first == b.first)
        return (a.second < b.second);

    return (a.first > b.first);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cerr.tie(0);
    cout.tie(0);
    cin.tie(0);
    std::cout << std::setprecision(2) << std::fixed;

    double n, t1, t2, k;
    // cin >> n >> t1 >> t2 >> k;
    scanf("%lf %lf %lf %lf", &n, &t1, &t2, &k);

    vector<pair<double, unsigned int>> v(n);
    double a, b, score, score1, score2;
    for (int i = 0; i < n; i++)
    {
        // cin >> a >> b;
        scanf("%lf %lf", &a, &b);
        // cout << a << b;
        score1 = ((a * t1 * (100 - k) / 100.000) + (b * t2));
        score2 = ((b * t1 * (100 - k) / 100.000) + (a * t2));
        score = max(score1, score2);

        v[i] = make_pair(score, i + 1);
    }

    // sort(v.rbegin(), v.rend());
    sort(v.begin(), v.end(), sortbysec);

    for (auto it : v)
    {
        // cout << it.second << " " << it.first << "\n";
        printf("%d %.2lf\n", it.second, it.first);
    }

    return 0;
}