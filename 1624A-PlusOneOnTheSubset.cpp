// A. Plus One on the Subset
// https://codeforces.com/problemset/problem/1624/A
// Time 62 ms
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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);
        cout << arr[n - 1] - arr[0] << "\n";
    }

    return 0;
}