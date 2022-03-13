#include <bits/stdc++.h>
#define fu(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;

int main()
{
    int n, count = 0, count2 = 0;
    cin >> n;

    vector<int> v1;
    vector<int> v2;

    fu(i, n)
    {
        int value;
        cin >> value;
        v1.push_back(value);
    }
    fu(i, n)
    {
        int value;
        cin >> value;
        v2.push_back(value);
    }
    fu(i, n)
    {
        if (v1[i] == v2[i])
            count++;
    }
    sort(v2.begin(), v2.end());
    fu(i, n)
    {
        int x = v1[i];
        if (binary_search(v2.begin(), v2.end(), x))
        {
            count2++;
        }
    }
    cout << count << endl;
    cout << count2 - count;
}