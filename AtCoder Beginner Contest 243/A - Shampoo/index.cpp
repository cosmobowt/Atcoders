#include <bits/stdc++.h>
#define fu(i, n) for (int i = 1; i <= n; i++)
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;

int main()
{
    int v, a, b, c;
    cin >> v >> a >> b >> c;

    while (v > 0)
    {
        if (a > v)
        {
            cout << "F";
            break;
        }
        v -= a;
        if (b > v)
        {
            cout << "M";
            break;
        }
        v -= b;
        if (c > v)
        {
            cout << "T";
            break;
        }
        v -= c;
    }
}