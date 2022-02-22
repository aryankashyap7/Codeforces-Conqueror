// A. Insomnia cure
// https://codeforces.com/problemset/problem/148/A
// Time 30 ms
// Memory 0 KB
// Rating 800

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int count = 0;
    for (int i = 1; i <= d; i++)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            count++;
    }
    cout << count;

    return 0;
}