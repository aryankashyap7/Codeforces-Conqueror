// A. Review Site
// https://codeforces.com/contest/1511/problem/A
// Time 46 ms
// Memory 28 KB
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
        int n, c = 0;
        vector<int> v;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (int a : v)
        {
            if (a == 1 || a == 3)
                c++;
        }
        cout << c << "\n";
    }

    return 0;
}