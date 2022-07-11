// A. Download More RAM
// https://codeforces.com/problemset/problem/1629/A
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
        int n, iram;
        cin >> n >> iram;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        vector<pair<int, int>> ram;
        for (int i = 0; i < n; i++)
            ram.push_back(make_pair(a[i], b[i]));

        sort(ram.begin(), ram.end());
        for (int j = 0; j < n; j++)
        {
            if (iram >= ram[j].first)
                iram += ram[j].second;
            else
                break;
        }
        cout << iram << "\n";
    }

    return 0;
}