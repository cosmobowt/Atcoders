#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x;
    double prize;
    cin >> a >> b >> c >> x;

    if (x < (a + 1))
    {
        cout << 1;
    }
    else if (x > b)
    {
        cout << 0;
    }
    else
    {
        prize = abs(a - b);
        prize = c / prize;
        cout << prize;
    }
}
