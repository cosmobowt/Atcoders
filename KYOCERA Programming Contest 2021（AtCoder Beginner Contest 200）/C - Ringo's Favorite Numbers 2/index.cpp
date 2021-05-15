#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long count = 0;
    int a[1000];

    for (int i = 1; i <= n; i++)
    {
        int value;
        cin >> value;

        value %= 200;

        count += a[value];
        a[value]++;
    }
    cout << count;
}