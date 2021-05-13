//220->1+2+4+5+10+...=284
//284->1+2+4+71...=220
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    int count2 = 0;
    for (int i = 1; i < 10000; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
                count += j;
        }
        for (int h = 1; h < count; h++)
        {
            if (count % h == 0)
                count2 += h;
        }
        if (count2 == i)
            cout << i << endl;
        count = 0;
        count2 = 0;
    }
}