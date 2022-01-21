// A. Xenia and Divisors
// https://codeforces.com/problemset/problem/342/A
// Time 31 ms
// Memory 400 KB
// Rating 1200

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c1 = 0, ce = 0, error23 = 0, error46 = 0, error3 = 0, error6 = 0;
    cin >> n;
    int s[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s[i] = x;
        if (x == 1)
            c1++;
        if (x == 5 || x == 7)
            ce = 1;
    }
    sort(s, s + n);
    error23 = count(s, s + n, 2) + count(s, s + n, 3);
    error46 = count(s, s + n, 4) + count(s, s + n, 6);
    error3 = count(s, s + n, 3);
    error6 = count(s, s + n, 6);
    // cout << c1 << " C1" << endl;
    // cout << ce << " CE" << endl;
    // cout << error23 << " E23" << endl;
    // cout << error46 << " E46" << endl;
    if (ce == 1 || c1 != (n / 3) || error23 != (n / 3) || error46 != (n / 3) || error3 > error6)
    {
        cout << "-1"
             << "\n";
    }
    else
    {
        int x = (n / 3);
        for (int i = 0; i < x; i++)
        {
            cout << "1 " << s[x + i] << " " << s[2 * x + i] << "\n";
        }
    }
    return 0;
}