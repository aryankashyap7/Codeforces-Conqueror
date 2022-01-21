// A. Kitahara Haruki's Gift
// https://codeforces.com/problemset/problem/433/A
// Time 15 ms
// Memory 0 KB
// Rating 1100

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, c100, c200;
    string s = "NO";
    cin >> t;
    int apples[t];
    for (int i = 0; i < t; i++)
    {
        cin >> apples[i];
    }
    c100 = count(apples, apples + t, 100);
    c200 = count(apples, apples + t, 200);
    if ((t > 1 && c100 % 2 == 0) && (c100 != 0 || c200 % 2 == 0))
        s = "YES";

    cout << s << "\n";
    return 0;
}