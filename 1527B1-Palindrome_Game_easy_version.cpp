// B1. Palindrome Game (easy version)
// https://codeforces.com/problemset/problem/1527/B1
// Time 15 ms
// Memory 0 KB
// Rating 1200

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
        string s;
        cin >> s;

        int c0 = count(s.begin(), s.end(), '0');
        if (c0 == 1)
            cout << "BOB\n";
        else if (c0 % 2 == 0)
            cout << "BOB\n";
        else
            cout << "ALICE\n";
    }

    return 0;
}