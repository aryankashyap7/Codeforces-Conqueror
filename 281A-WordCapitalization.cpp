// A. Word Capitalization
// https://codeforces.com/problemset/problem/281/A
// Time 30 ms
// Memory 0 KB
// Rating 800

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] = s[0] + 'A' - 'a';

    cout << s;
    return 0;
}