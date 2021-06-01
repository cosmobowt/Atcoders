#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        int value = i * 100 + 1;
        for (int i = 1; i <= k; i++)
        {
            sum += value;
            value++;
        }
    }
    cout << sum;
}