#include <bits/stdc++.h>
#define fu(i, n) for (int i = 0; i < 2 * (n + 1); i++)
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int i = 1;
    while (i <= (2 * (n + 1)))
    {
        sort(v.begin(), v.end());
        while (binary_search(v.begin(), v.end(), i) == true)
        {
            i++;
        }
        cout << i << endl;
        v.push_back(i);

        int aoki;
        cin >> aoki;
        if (aoki == 0)
            return 0;
        else
            v.push_back(aoki);
        i++;
    }
}