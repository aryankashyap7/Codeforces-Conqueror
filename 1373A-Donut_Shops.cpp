// A. Donut Shops
// https://codeforces.com/problemset/problem/1373/A
// Time 15 ms
// Memory 0 KB
// Rating 1000

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
        long long int a, b, c;
        cin >> a >> b >> c;
        long long int case1, case2;

        case1 = (c > a) ? 1 : -1;
        case2 = (a * b > c) ? b : -1;
        cout << case1 << " " << case2 << "\n";
    }

    return 0;
}