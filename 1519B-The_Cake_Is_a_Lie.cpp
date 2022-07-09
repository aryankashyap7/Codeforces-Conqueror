// B. The Cake Is a Lie
// https://codeforces.com/problemset/problem/1519/B
// Time 0 ms
// Memory 0 KB
// Rating 800

#include <bits/stdc++.h>
using namespace std;

// RULES:
// You can move to the neighboring cells to the right or down. In other words, suppose you are standing at cell (x,y). You can:

// move right to the cell (x,y+1) — it costs x burles;
// move down to the cell (x+1,y) — it costs y burles.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int x1, y1, burles, sum = 0;
        cin >> x1 >> y1 >> burles;

        if (y1 - 1 > 0)
            sum += (y1 - 1);

        if (x1 - 1 > 0)
            sum += (x1 - 1) * y1;

        if (sum == burles)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}