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
            if (naya != "")
                naya.pop_back();
        }
        else
        {
            naya += s[i];
        }
    }
    cout << naya;
}