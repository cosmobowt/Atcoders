#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int m = n % 100;
    n /= 100;
    if (m > 0)
        n++;

    cout << n;
}