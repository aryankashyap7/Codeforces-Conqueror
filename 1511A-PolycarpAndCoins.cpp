// A. Polycarp and Coins
// https://codeforces.com/contest/1551/problem/A
// Time 0 ms
// Memory 12 KB
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
        int n, change, c1 = 0, c2 = 0;
        cin >> n;
        change = n % 3;
        if (change == 0)
        {
            c1 = n / 3;
            c2 = n / 3;
        }
        else if (change == 1)
        {
            c1 = (n / 3) + 1;
            c2 = n / 3;
        }
        else
        {
            c1 = (n / 3);
            c2 = (n / 3) + 1;
        }
        cout << c1 << " " << c2 << "\n";
    }

    return 0;
}