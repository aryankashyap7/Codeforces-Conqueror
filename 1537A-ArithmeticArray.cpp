// A. Arithmetic Array
// https://codeforces.com/problemset/problem/1537/A
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
        int n, k, sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            sum += k;
        }
        if (sum < n)
            cout << 1 << "\n";
        else
            cout << sum - n << endl;
    }

    return 0;
}