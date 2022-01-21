// A. Shooshuns and Sequence
// https://codeforces.com/problemset/problem/222/A
// Time 62 ms
// Memory 400 KB
// Rating 1200

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int arr[n + 1];
    for (int i = 1; i < n + 1; i++)
    {
        cin >> arr[i];
    }
    int x = k;
    for (int i = n; i > 0; i--)
    {
        if (arr[i] != arr[k])
        {
            x = i;
            break;
        }
    }
    if (x > k)
    {
        cout << "-1" << endl;
    }
    else if (x == k)
        cout << "0"
             << "\n";
    else
        cout << x
             << "\n";

    return 0;
}