// B. Maximum Product
// https://codeforces.com/problemset/problem/1406/B
// Time 46 ms
// Memory 800 KB
// Rating 1200

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    lli n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        lli a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        lli ans = a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] * a[n - 5];
        lli pr = a[0] * a[1] * a[2] * a[3] * a[n - 1];
        lli tr = a[0] * a[1] * a[n - 1] * a[n - 2] * a[n - 3];
        cout << max({ans, pr, tr}) << '\n';
    }

    return 0;
}