#include <bits/stdc++.h>
#define fu(i, n) for (int i = 1; i <= n; i++)
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int total_takahashi_minutes = (a * 60) + b;
    int total_aoki_minutes = (c * 60) + d;

    if (total_takahashi_minutes > total_aoki_minutes)
        cout << "Aoki";
    else if (total_takahashi_minutes < total_aoki_minutes)
        cout << "Takahashi";
    else
        cout << "Takahashi";
}