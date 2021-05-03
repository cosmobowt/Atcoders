#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S, T;
    cin >> S;

    for (char s : S)
        if (s == 'R')
        {
            reverse(T.begin(), T.end());
        }
        else if (T.back() == s)
        {
            T.pop_back();
        }
        else
        {
            T += s;
        }

    cout << T;
}