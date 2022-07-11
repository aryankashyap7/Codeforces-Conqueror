// A. Wizard of Orz
// https://codeforces.com/problemset/problem/1467/A
// Time 0 ms
// Memory 500 KB
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
        string s = "0123456789";
        string ans;

        if (n == 1)
            ans = "9";
        else if (n == 2)
            ans = "98";
        else
        {
            ans = "989";
            n = n - 3;
            int count = n / 10;
            for (int i = 0; i < count; i++)
            {
                ans += s;
            }
            n -= count * 10;
            for (int i = 0; i < n; i++)
            {
                ans += s[i];
            }
        }

        cout << ans << "\n";
    }

    return 0;
}