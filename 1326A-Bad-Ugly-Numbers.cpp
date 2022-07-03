// A. Bad Ugly Numbers
// https://codeforces.com/problemset/problem/1326/A
// Time 15 ms
// Memory 300 KB
// Rating 1000

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
        int n;
        cin >> n;
        if (n == 1)
            cout << "-1\n";
        else
        {
            string s = "2";
            for (int i = 0; i < n - 1; i++)
                s += "3";
            cout << s << "\n";
        }
    }

    return 0;
}