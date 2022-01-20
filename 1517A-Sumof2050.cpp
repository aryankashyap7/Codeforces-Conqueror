// A. Sum of 2050
// https://codeforces.com/problemset/problem/1517/A
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
        long long int n, d, res(0);
        cin >> n;
        if (n % 2050)
        {
            cout << "-1"
                 << "\n";
            continue;
        }
        d = n / 2050;
        while (d > 0)
        {
            res += d % 10;
            d /= 10;
        }

        cout << res << "\n";
    }

    return 0;
}