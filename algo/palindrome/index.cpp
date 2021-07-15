#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string s2 = s;
    //     vector<char> v;

    //     for (int i = 0; i < s.length(); i++)
    //     {
    //         char c = s[i];
    //         v.push_back(c);
    //     }
    reverse(s.begin(), s.end());
    if (s2 == s)
        cout << "palindrome";
    else
        cout << "not palindrome";
}