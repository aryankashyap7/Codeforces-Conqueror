// A. Young Physicist
// https://codeforces.com/problemset/problem/69/A
// Time 30 ms
// Memory 0 KB
// Rating 1000

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a, b, c, sa = 0, sb = 0, sc = 0;
    while (n--)
    {

        cin >> a >> b >> c;
        sa += a;
        sb += b;
        sc += c;
    }
    if (sa == 0 && sb == 0 && sc == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}