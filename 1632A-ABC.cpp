// A. ABC
// https://codeforces.com/problemset/problem/1632/A
// Time 0 ms
// Memory 0 KB
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
        int n, flag = 1;
        cin >> n;
        string s;
        cin >> s;

        for (int i = 0; i < n - 1; i++)
        {
            if ((s[i] == '1' && s[i + 1] == '1') || (s[i] == '0' && s[i + 1] == '0'))
            {
                flag = 0;
                break;
            }
        }
        for (int i = 0; i < n - 2; i++)
        {
            if ((s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1') || (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0'))
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}