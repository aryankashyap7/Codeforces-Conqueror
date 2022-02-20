// A. Spy Detected!
// https://codeforces.com/problemset/problem/1512/A
// Time 30 ms
// Memory 0 KB
// Rating 800

#include <bits/stdc++.h>
using namespace std;
#define inp(a, n, f)                   \
    int a[n + f];                      \
    for (int hh = f; hh < n + f; hh++) \
        cin >> a[hh];
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
        inp(a, n, 0);
        map<int, int> m;
        for (int i : a)
            m[i]++;
        for (int i = 0; i < n; i++)
        {
            if (m[a[i]] == 1)
            {
                cout << i + 1 << '\n';
                break;
            }
        }
    }

    return 0;
}