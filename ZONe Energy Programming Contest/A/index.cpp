#include <bits/stdc++.h>
using namespace std;

int main()
{
    string pres = "ZONe";
    int count = 0;
    string s;
    cin >> s;

    int found = s.find(pres, 0);

    while (found != string::npos)
    {
        count++;
        found = s.find(pres, found + 1);
    }

    cout << count;
}