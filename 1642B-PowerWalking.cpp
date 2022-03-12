// B. Power Walking
// https://codeforces.com/contest/1642/problem/B
// Time 202 ms
// Memory 14100 KB
// Rating 900

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
        int n, x;
        cin >> n;
        set<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v.insert(x);
        }
        int s = v.size();
        for (int i = 0; i < n; i++)
        {
            if (i < v.size())
                cout << v.size() << " ";
            else
            {
                s++;
                cout << s << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
