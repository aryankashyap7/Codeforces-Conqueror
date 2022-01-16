// A. Box is Pull
// https://codeforces.com/problemset/problem/1428/A
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
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int xd = x2 - x1;
        xd = (xd > 0) ? xd : -xd;
        int yd = y2 - y1;
        yd = (yd > 0) ? yd : -yd;
        int ans = xd + yd + 2 * (xd > 0 && yd > 0);
        cout << ans << "\n";
    }

    return 0;
}