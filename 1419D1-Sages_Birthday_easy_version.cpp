// D1. Sage's Birthday (easy version)
// https://codeforces.com/problemset/problem/1419/D1
// Time 46 ms
// Memory 800 KB
// Rating 1000


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    if (t % 2 == 0)
    {
        ans = (t / 2) - 1;
    }
    else
        ans = (t - 1) / 2;

    sort(arr, arr + t);

    int pick[ans], left[t - ans];
    for (int i = 0; i < ans; i++)
    {
        pick[i] = arr[i];
    }
    for (int i = 0; i < t - ans; i++)
    {
        left[i] = arr[i + ans];
    }

    cout << ans << "\n";
    for (int i = 0; i < ans; i++)
    {
        cout << left[i] << " ";
        cout << pick[i] << " ";
    }
    for (int i = ans; i < t - ans; i++)
    {
        cout << left[i] << " ";
    }

    return 0;
}