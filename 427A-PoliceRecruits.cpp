// A. Police Recruits
// https://codeforces.com/problemset/problem/427/A
// Time 15 ms
// Memory 400 KB
// Rating 800

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int crime = 0, cases = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == -1)
        {
            crime--;
            if (crime < 0)
            {
                cases += -crime;
                crime = 0;
            }
        }
        else
        {
            crime += a[i];
            if (crime < 0)
            {
                cases += -crime;
                crime = 0;
            }
        }
    }
    cout << cases;

    return 0;
}