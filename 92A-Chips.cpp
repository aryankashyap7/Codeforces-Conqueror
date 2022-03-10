// A. Chips
// https://codeforces.com/problemset/problem/92/A
// Time 30 ms
// Memory 0 KB
// Rating 800

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int cycle = (n * (n + 1)) / 2;
    m = m % cycle;

    for (int i = 1; i <= n; i++)
    {
        if (m >= i)
        {
            m -= i;
        }
        else
            break;
    }
    cout << m;

    return 0;
}