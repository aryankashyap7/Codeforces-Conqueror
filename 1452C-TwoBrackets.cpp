// C. Two Brackets
// https://codeforces.com/problemset/problem/1452/C
// Time 15 ms
// Memory 500 KB
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
        string s;
        cin >> s;
        long na(0), nb(0), cnt(0);
        for (long p = 0; p < s.size(); p++)
        {
            if (s[p] == '(')
            {
                ++na;
            }
            else if (s[p] == '[')
            {
                ++nb;
            }
            else if (s[p] == ')' && na > 0)
            {
                ++cnt;
                --na;
            }
            else if (s[p] == ']' && nb > 0)
            {
                ++cnt;
                --nb;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}