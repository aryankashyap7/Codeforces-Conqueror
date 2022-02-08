// A. Kyoya and Photobooks
// https://codeforces.com/problemset/problem/554/A
// Time 15 ms
// Memory 0 KB
// Rating 800

#include <bits/stdc++.h>
using namespace std;
//Took 20 mins
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int n = s.size();
    cout << 26 + 25 * n << endl;

    return 0;
}

// EDITORIAL BY ALOK KHANSALI

#include <iostream> // 14mins, 1 WA
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x = 51;
    string a;
    cin >> a;
    if (a.size() != 1)
    {
        for (int i = 0; i < a.size() - 1; i++)
            x += 25;
    }
    cout << x;
    return 0;
}