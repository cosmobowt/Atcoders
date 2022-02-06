#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, count = 0;
    cin >> a >> b;

    vector<int> v1, v2;
    v1.push_back(a);
    v2.push_back(b);

    while (a != 1)
    {
        a /= 2;
        v1.push_back(a);
        b *= 2;
        v2.push_back(b);
    }

    for (int i = 0; i < v1.size(); i++)
    {
        //   cout<<v1[i]<<" "<<v2[i]<<endl;
        if (v1[i] % 2 == 0)
        {
            count += v2[i];
        }
    }
}