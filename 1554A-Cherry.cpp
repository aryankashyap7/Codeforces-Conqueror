// A. Cherry
// https://codeforces.com/problemset/problem/1554/A
// Time 77 ms
// Memory 800 KB
// Rating 800

#define lli long long int
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t, res;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        lli a[n + 1];
        res = 0;

        for (int i = 1; i <= n; ++i)

            cin >> a[i];

        for (int i = 1; i <= n - 1; i++)

            res = max(res, a[i] * a[i + 1]);

        cout << res << endl;
    }

    return 0;
}