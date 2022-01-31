// B. Jzzhu and Sequences
// https://codeforces.com/problemset/problem/450/B
// Time 15 ms
// Memory 0 KB
// Rating 1300

#define M 1000000007
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, n;
    cin >> x >> y >> n;
    int ans = 0;

    if (n % 6 == 0)
    {
        ans = x - y;
    }
    else if (n % 6 == 1)
    {
        ans = x;
    }
    else if (n % 6 == 2)
    {
        ans = y;
    }
    else if (n % 6 == 3)
    {
        ans = y - x;
    }
    else if (n % 6 == 4)
    {
        ans = -x;
    }
    else if (n % 6 == 5)
    {
        ans = -y;
    }

    if (ans < 0)
    {
        ans += 2 * M;
    }
    cout << ans % M << "\n";

    return 0;
}