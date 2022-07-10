// B. 01 Game
// https://codeforces.com/problemset/problem/1373/B
// Time 15 ms
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
        string s;
        cin >> s;

        int c1 = count(s.begin(), s.end(), '1');
        int c0 = count(s.begin(), s.end(), '0');

        if (min(c0, c1) % 2 == 1)
            cout << "DA \n";
        else
            cout << "NET \n";
    }
    return 0;
}
