// A. New Year and Hurry
// https://codeforces.com/problemset/problem/750/A
// Time 15 ms
// Memory 0 KB
// Rating 800

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, time;
    cin >> n >> time;
    int timeleft = 240 - time;
    int val = INT_MAX;
    while (timeleft - val < 0)
    {
        val = (n * n + n) * 2.5;
        n--;
    }
    cout << n + 1 << "\n";

    return 0;
}