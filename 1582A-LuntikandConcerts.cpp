// A. Luntik and Concerts
// https://codeforces.com/contest/1582/problem/A
// Time 0 ms
// Memory 0 KB
// Rating 800

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     int t = 1;
    cin >> t;
    while (t--)
    {
        long long int a, b, c;
    cin >> a >> b >> c;
    if ((a + c) % 2 == 0)
        cout << 0 << "\n";
    else
        cout << 1 << "\n";
    }

    return 0;
}
