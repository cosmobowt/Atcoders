#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    pow(a, 2) + pow(b, 2) < pow(c, 2) ? cout << "Yes" : cout << "No";
}