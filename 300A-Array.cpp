// A. Array
// https://codeforces.com/problemset/problem/300/A
// Time 30 ms
// Memory 0 KB
// Rating 1100

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int a[t];
    vector<int> neg, pos, zero;
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];

        if (a[i] > 0)
            pos.push_back(a[i]);
        else if (a[i] < 0)
            neg.push_back(a[i]);
        else
            zero.push_back(a[i]);
    }

    if (pos.size() == 0)
    {
        pos.push_back(neg.back());
        neg.pop_back();
        pos.push_back(neg.back());
        neg.pop_back();
    }

    if (neg.size() % 2 == 0)
    {
        zero.push_back(neg.back());
        neg.pop_back();
    }

    cout << neg.size() << " ";
    for (int x : neg)
        cout << x << " ";
    cout << "\n";

    cout << pos.size() << " ";
    for (int x : pos)
        cout << x << " ";
    cout << "\n";

    cout << zero.size() << " ";
    for (int x : zero)
        cout << x << " ";
    cout << "\n";

    return 0;
}