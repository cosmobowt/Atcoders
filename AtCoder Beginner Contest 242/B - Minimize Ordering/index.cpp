#include <bits/stdc++.h>
using namespace std;

int main()
{
    string t;
    cin >> t;
    vector<char> v;
    for (char &c : t)
    {
        v.push_back(c);
    }
    sort(v.begin(), v.end());
    for (auto &c : v)
    {
        cout << c;
    }
}
