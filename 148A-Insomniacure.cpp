// A. Insomnia cure
// https://codeforces.com/problemset/problem/148/A
// Time 62 ms
// Memory 4700 KB
// Rating 800

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    set<int> s;
    for (int i = k; i <= d; i = i + k)
    {
        s.insert(i);
    }
    for (int i = l; i <= d; i = i + l)
    {
        s.insert(i);
    }
    for (int i = m; i <= d; i = i + m)
    {
        s.insert(i);
    }
    for (int i = n; i <= d; i = i + n)
    {
        s.insert(i);
    }

    cout << s.size() << endl;

    return 0;
}