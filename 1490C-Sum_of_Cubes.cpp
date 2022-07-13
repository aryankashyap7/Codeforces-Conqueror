// C. Sum of Cubes
// https://codeforces.com/problemset/problem/1490/C
// Time 15 ms
// Memory 0 KB
// Rating 1100


#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        ll lo = 1, hi = 10000;
        bool ans = false;
        ll p;
        while (lo <= hi)
        {
            p = lo * lo * lo + hi * hi * hi;
            if (p == x)
            {
                ans = true;
                break;
            }
            else if (p < x)
            {
                lo++;
            }
            else
            {
                hi--;
            }
        }
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}