#include <bits/stdc++.h>
#define fu(i, n) for (int i = 0; i < n; i++)
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = 0, y = 0, r = 4;

    fu(i, n)
    {
        if (s[i] == 'S')
        {
            if (r % 4 == 0)
                x++;
            else if (r % 4 == 1)
                y--;
            else if (r % 4 == 2)
                x--;
            else if (r % 4 == 3)
                y++;
        }
        else
            r++;
    }
    cout << x << "\t" << y;
}