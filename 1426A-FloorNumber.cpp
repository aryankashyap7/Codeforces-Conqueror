// A. Floor Number
// https://codeforces.com/problemset/problem/1426/A
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
        int n, x, fn;
        cin >> n >> x;
        if (n == 1 || n == 2)
            fn = 1;
        else
        {
            n = n - 2;
            fn = 2;
            if (n % x == 0)
                fn--;
            int temp = n / x;
            fn = fn + temp;
        }
        cout << fn << endl;
    }

    return 0;
}