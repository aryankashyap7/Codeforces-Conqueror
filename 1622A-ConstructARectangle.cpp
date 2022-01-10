// A. Construct a Rectangle
// https://codeforces.com/problemset/problem/1622/A
// Time 31 ms
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
        vector<int> v;
        string s = "NO";
        for (int i = 0; i < 3; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        if (v[2] == (v[1] + v[0]))
            s = "YES";
        else if (v[1] == v[0] && v[2] % 2 == 0)
            s = "YES";
        else if (v[1] == v[2] && v[0] % 2 == 0)
            s = "YES";

        cout << s << "\n";
    }

    return 0;
}