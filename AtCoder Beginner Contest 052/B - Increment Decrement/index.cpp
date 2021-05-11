#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    vector<int> v;
    v.push_back(count);

    for (auto i : s)
    {
        if (i == 'D')
            count--;
        else
            count++;

        v.push_back(count);
    }

    cout << *max_element(v.begin(), v.end());
}