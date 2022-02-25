// A. Ultra-Fast Mathematician
// https://codeforces.com/problemset/problem/61/A
// Time 15 ms
// Memory 0 KB
// Rating 800

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t, ans;
    cin >> s >> t;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t[i])
        {
            ans += '0';
        }
        else
        {
            ans += '1';
        }
    }
    cout << ans << endl;

    return 0;
}