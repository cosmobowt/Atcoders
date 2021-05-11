#include <bits/stdc++.h>
using namespace std;

int main()
{
    float n;
    cin >> n;
    float m = n;
    vector<int> v;
    int count = 0;

    while (m--)
    {
        int value;
        cin >> value;
        v.push_back(value);
    }

    float accu = accumulate(v.begin(), v.end(), 0);
    float middle = ceil(accu / n);

    for (int i : v)
    {
        int temp = pow(i - middle, 2);
        count += temp;
    }

    cout << count;
}