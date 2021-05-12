#include <bits/stdc++.h>
using namespace std;
long M = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    int m = n;
    int count = 1;
    int counter = 0;

    while (n > 0)
    {
        count *= n;
        n--;
    }

    // cout << count;

    for (int i = 1; i <= count; i++)
    {
        if (count % i == 0)
            counter++;
    }

    // cout << counter;
    cout << counter % M;
}