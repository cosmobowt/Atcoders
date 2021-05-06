#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int m;
    cin >> n >> m;

    vector<char> v;
    vector<int> v2;
    int count = 0;

    while (m--)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }

    while (n++)
    {
        string s = to_string(n);
        cout << s;
        int found;
        for (auto i : v)
        {
            found = s.find(i, 0);
            v2.push_back(found);
        }
        int maxi = *max_element(v2.begin(), v2.end());
        n = stoi(s);
        if (found != 0)
            break;
    }

    cout << n;
}