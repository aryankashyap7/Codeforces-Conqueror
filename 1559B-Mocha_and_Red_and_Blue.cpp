// B. Mocha and Red and Blue
// https://codeforces.com/problemset/problem/1559/B
// Time 15 ms
// Memory 0 KB
// Rating 900

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string a = s, b = s;
        if (s[0] == '?')
        {
            a[0] = 'B';
            b[0] = 'R';
        }
        for (int i = 1; i < n; i++)
        {
            if (a[i] == '?' && a[i - 1] == 'B')
            {
                a[i] = 'R';
            }
            if (a[i] == '?' && a[i - 1] == 'R')
            {
                a[i] = 'B';
            }
            if (b[i] == '?' && b[i - 1] == 'B')
            {
                b[i] = 'R';
            }
            if (b[i] == '?' && b[i - 1] == 'R')
            {
                b[i] = 'B';
            }
        }

        int ca = 0, cb = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == 'B' && a[i + 1] == 'B' || a[i] == 'R' && a[i + 1] == 'R')
                ca++;
            if (b[i] == 'B' && b[i + 1] == 'B' || b[i] == 'R' && b[i + 1] == 'R')
                cb++;
        }

        if (ca >= cb)
            cout << b << "\n";
        else
            cout << a << "\n";
    }

    return 0;
}