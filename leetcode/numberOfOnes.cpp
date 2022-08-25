#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    uint32_t n;

    cin >> n;
    int ones = 0;
    int temp;
    for (int i = 0; i < 32; i++)
    {
        temp = n%2;
        if (temp == 1)
            ones++;
        n /= 2;
    }
    cout << ones;
    return 0;
}
