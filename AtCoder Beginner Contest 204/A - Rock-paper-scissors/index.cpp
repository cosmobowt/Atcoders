#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    if (x == y)
        cout << x;
    else
    {
        for (int i = 0; i < 3; i++)
            if (i != x && i != y)
                cout << i;
    }
}