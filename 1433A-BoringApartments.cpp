// A. Boring Apartments
// https://codeforces.com/problemset/problem/1433/A
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
        int x, digits;
        cin >> x;
        string s = to_string(x);
        digits = s.length();
        if (s[0] == '1')
            digits = 0;
        else if (s[0] == '2')
            digits = 10;
        else if (s[0] == '3')
            digits = 20;
        else if (s[0] == '4')
            digits = 30;
        else if (s[0] == '5')
            digits = 40;
        else if (s[0] == '6')
            digits = 50;
        else if (s[0] == '7')
            digits = 60;
        else if (s[0] == '8')
            digits = 70;
        else if (s[0] == '9')
            digits = 80;

        if (s.size() == 1)
            digits += 1;
        else if (s.size() == 2)
            digits += 3;
        else if (s.size() == 3)
            digits += 6;
        else if (s.size() == 4)
            digits += 10;
        cout << digits << "\n";
    }

    return 0;
}