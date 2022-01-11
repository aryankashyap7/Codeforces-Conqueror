// A. Computer Game
// https://codeforces.com/problemset/problem/1598/A
// Time 0 ms
// Memory 8 KB
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
        int n;
        cin >> n;
        string a, b, s = "YES";
        cin >> a >> b;

        if (n == 1)
        {
            continue;
        }

        else
        {
            for (int i = 1; i < n - 1; i++)
            {
                if (a[i] == '1' && b[i] == '1')
                {
                    s = "NO";
                    break;
                }
            }
        }
        cout << s << "\n";
    }

    return 0;
}