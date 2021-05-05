#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int ref = n;
    vector<string> v;

    while (n--)
    {
        string value;
        cin >> value;
        v.push_back(value);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < ref; i++)
    {
        cout << v[i];
    }
}