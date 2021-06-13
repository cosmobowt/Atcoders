#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;

    vector<int> v1, v2;

    for (int i = i; i <= a; i++)
    {
        int b;
        cin >> b;
        v1.push_back(b);
        v2.push_back(i);
    }

    sort(v1.begin(), v1.end());

    if (v1 == v2)
        cout << "Yes";
    else
        cout << "No";
}