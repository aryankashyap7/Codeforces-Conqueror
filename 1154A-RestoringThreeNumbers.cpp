// A. Restoring Three Numbers
// https://codeforces.com/contest/1154/problem/A
// Time X ms
// Memory X KB
// Rating 800

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 4);
    cout << arr[3] - arr[0] << " ";
    cout << arr[3] - arr[1] << " ";
    cout << arr[3] - arr[2] << " ";

    return 0;
}