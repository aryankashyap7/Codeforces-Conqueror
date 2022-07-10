// A. Dragons
// https://codeforces.com/problemset/problem/230/A
// Time 30 ms
// Memory 0 KB
// Rating 1000

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int str, n;
    // int dragon[n], bonus[n];
    // cin>>str>>n;
    // for(int i=0;i<n;i++)
    // cin>>dragon[i]>>bonus[i];

    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> levels;
    int dragon, exp;

    for (int i = 0; i < n; i++)
    {
        cin >> dragon >> exp;
        levels.push_back(make_pair(dragon, exp));
    }
    sort(levels.begin(), levels.end());

    // for (int i = 0; i < n; i++)
    // {
    //     cout << levels[i].first << " " << levels[i].second << "\n";
    // }
    int lyf = 1;
    for (int pass = 0; pass < n; pass++)
    {
        if (s > levels[pass].first)
            s += levels[pass].second;
        else
            lyf = 0;

        if (lyf == 0)
            break;
    }
    if (lyf == 1)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}