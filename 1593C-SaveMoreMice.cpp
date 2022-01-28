// C. Save More Mice
// https://codeforces.com/problemset/problem/1593/C
// Time 78 ms
// Memory 1600 KB
// Rating 1000

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
        int hole, mice, survivors = 0, dushman = 0;
        cin >> hole >> mice;
        int soldiers[mice];

        for (int i = 0; i < mice; i++)
        {
            cin >> soldiers[i];
        }

        sort(soldiers, soldiers + mice);
        for (int i = mice - 1; i >= 0; i--)
        {
            if (soldiers[i] > dushman)
            {
                dushman += hole - soldiers[i];
                survivors++;
                // cout << "survivors: " << survivors << "\n";
            }
        }
        cout << survivors << endl;
    }

    return 0;
}
