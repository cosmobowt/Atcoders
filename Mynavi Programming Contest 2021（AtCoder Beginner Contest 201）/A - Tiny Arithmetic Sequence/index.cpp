#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    vector<int> v;
    while (n--)
    {
        int value;
        cin >> value;
        v.push_back(value);
    }

    sort(v.begin(), v.end());

    v[1] - v[0] == v[2] - v[1] ? cout << "Yes" : cout << "No";
}