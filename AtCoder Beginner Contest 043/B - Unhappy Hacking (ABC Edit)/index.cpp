#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string naya;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'B')
        {
            naya.pop_back();
        }
        else if (s[i] >= 0)
        {
            naya += s[i];
        }
    }
    cout << naya;
}