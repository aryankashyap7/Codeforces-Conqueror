// B. Borze
// https://codeforces.com/contest/32/problem/B
// Time 30 ms
// Memory 0 KB
// Rating 800

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n;
    n = s.length();
    for (int i = 0; i < n;)
    {
        if (s[i] == '.')
        {
            cout << '0';
            i++;
        }
        else
        {
            if (s[i + 1] == '.')
            {
                cout << '1';
                i += 2;
            }
            else
            {
                cout << '2';
                i += 2;
            }
        }
    }
    return 0;
}