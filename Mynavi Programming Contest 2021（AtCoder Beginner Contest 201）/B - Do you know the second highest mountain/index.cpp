#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, string>> v;
    while (n--)
    {
        int h;
        string name;
        cin >> name >> h;
        v.push_back(make_pair(h, name));
    }
    sort(v.begin(), v.end());
    v.pop_back();
    cout << v.back().second;
}