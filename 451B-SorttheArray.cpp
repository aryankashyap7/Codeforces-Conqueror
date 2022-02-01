// B. Sort the Array
// https://codeforces.com/problemset/problem/451/B
// Time 15 ms
// Memory 1800 KB
// Rating 1300

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    vector<int> a, b;
    for (int i = 0; i < t; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
        b.push_back(temp);
    }
    sort(b.begin(), b.end());
    // for (auto x : a)
    //     cout << x << " ";
    // cout << endl;
    // for (auto x : b)
    //     cout << x << " ";
    if (a == b)
    {
        cout << "yes\n"
             << "1 1\n";
    }
    else
    {
        int l, r;
        for (int i = 0; i < t - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                l = i;
                break;
            }
        }
        for (int i = t - 1; i > 0; i--)
        {
            if (a[i] < a[i - 1])
            {
                r = i;
                break;
            }
        }

        reverse(a.begin() + l, a.begin() + r + 1);

        if (a == b)
            cout << "yes\n"
                 << l + 1 << " " << r + 1 << "\n";
        else
            cout << "no\n";
    }

    return 0;
}