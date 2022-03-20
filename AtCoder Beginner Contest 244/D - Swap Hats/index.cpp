#include <bits/stdc++.h>
#define fu(i, n) for (int i = 0; i < n; i++)
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;

int main()
{
    int n = 3, m = 3;
    vector<char> v1(n);
    vector<char> v2(m);
    fu(i, n) cin >> v1[i];
    fu(i, m) cin >> v2[i];

    if ((v1[0] == v2[0]) && (v1[1] == v2[1]) && (v1[2] == v2[2]))
        cout << "Yes";
    else
        cout << "No";
}