#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> v{"H", "HR", "2B", "3B"};
    sort(v.begin(), v.end());
    vector<string> v2;

    for (int i = 0; i < 4; i++)
    {
        string s;
        cin >> s;
        v2.push_back(s);
    }

    sort(v2.begin(), v2.end());

    if (v == v2)
        cout << "Yes";
    else
        cout << "No";
}