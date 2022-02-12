// B. Queue at the School
// https://codeforces.com/problemset/problem/266/B
// Time 30 ms
// Memory 0 KB
// Rating 800

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t, i, j;
    string s;
    cin >> n >> t >> s;
    for (i = 1; i <= t; i++)
    {
        for (j = 1; j < s.length(); j++)
        {
            if (s[j - 1] == 'B' && s[j] == 'G')
            {
                s[j - 1] = 'G';
                s[j] = 'B';
                j++;
            }
        }
    }
    cout << s;
    return 0;
}