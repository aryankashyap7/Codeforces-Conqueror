// B. Sereja and Suffixes
// https://codeforces.com/problemset/problem/368/B
// Time 295 ms
// Memory 5600 KB
// Rating 1100

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long n = 0, m = 0;
    cin >> n >> m;
    long array[n], tailUniques[n];
    for (long k = 0; k < n; k++)
    {
        cin >> array[k];
    }

    set<long> distinct;
    for (long k = n - 1; k >= 0; k--)
    {
        distinct.insert(array[k]);
        tailUniques[k] = distinct.size();
    }

    long index = 0;
    for (long k = 0; k < m; k++)
    {
        cin >> index;
        cout << tailUniques[index - 1] << endl;
    }

    return 0;
}