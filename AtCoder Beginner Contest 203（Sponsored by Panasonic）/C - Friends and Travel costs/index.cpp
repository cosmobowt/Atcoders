#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long m = n;
    long long path = 0;

    vector<pair<long long, long long>> v;

    while (n--)
    {
        long long a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    path += k;

    sort(v.begin(), v.end());
    for (int i = 0; i < m; i++)
    {
        if (path >= v[i].first)
            path += v[i].second;
        else
            break;
        // cout << v[i].first << " " << v[i].second << endl;
    }
    cout << path;
}