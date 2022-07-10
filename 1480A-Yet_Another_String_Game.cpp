// A. Yet Another String Game
// https://codeforces.com/problemset/problem/1480/A
// Time 15 ms
// Memory 0 KB
// Rating 800

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
        string s;
        cin >> s;

        for (int i = 0; i < s.length(); i++)
        {
            if (i % 2 == 0 && s[i] != 'a')
                s[i] = 'a';
            else if (i % 2 == 0 && s[i] == 'a')
                s[i] = 'b';
            else if (s[i] != 'z')
                s[i] = 'z';
            else
                s[i] = 'y';
        }
        cout << s << "\n";
    }

    return 0;
}