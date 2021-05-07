#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = n;

    while (n--)
    {
        count += n;
    }

    cout << count;
}