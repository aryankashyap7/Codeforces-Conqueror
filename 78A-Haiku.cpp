// A. Haiku
// https://codeforces.com/problemset/problem/78/A
// Time 30 ms
// Memory 0 KB
// Rating 800

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ca = 0, cb = 0, cc = 0;
    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            ca++;
        }
    }

    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u')
        {
            cb++;
        }
    }

    for (int i = 0; i < c.size(); i++)
    {
        if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u')
        {
            cc++;
        }
    }

    if (ca == 5 && cb == 7 && cc == 5)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}