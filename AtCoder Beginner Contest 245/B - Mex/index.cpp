#include <bits/stdc++.h>
#define fu(i, n) for (int i = 0; i < n; i++)
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    fu(i, n)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());
    fu(i, n)
    {
        if (binary_search(v.begin(), v.end(), i) == false)
        {
            cout << i;
            break;
        }
    }
}