// A. Comparing Strings
// https://codeforces.com/problemset/problem/186/A
// Time 30 ms
// Memory 400 KB
// Rating 1100

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2, ans = "NO";
    cin >> s1 >> s2;
    int stop1 = 0, stop2 = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
        {
            stop1 = i;
            break;
        }
    }
    for (int i = stop1 + 1; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
        {
            stop2 = i;
            break;
        }
    }
    char temp = s2[stop2];
    s2[stop2] = s2[stop1];
    s2[stop1] = temp;

    if (s1 == s2)
        ans = "YES";

    cout << ans << "\n";

    return 0;
}