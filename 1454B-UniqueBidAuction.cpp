// B. Unique Bid Auction
// https://codeforces.com/problemset/problem/1454/B
// Time 78 ms
// Memory 3100 KB
// Rating 800

#define ll long long int
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
        int n, a;
        cin >> n;
        vector<ll> freq(n + 1), idx(n + 1);
        for (ll i = 0; i < n; i++)
        {
            cin >> a;
            freq[a]++;
            idx[a] = i + 1;
        }
        ll index = -1;
        for (ll i = 0; i <= n; i++)
        {
            if (freq[i] == 1)
            {
                index = idx[i];
                break;
            }
        }

        cout << index << endl;
    }

    return 0;
}