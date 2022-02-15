// A. Beautiful Year
// https://codeforces.com/problemset/problem/271/A
// Time 30 ms
// Memory 0 KB
// Rating 800

#include <bits/stdc++.h>
using namespace std;
bool checkuni(int n)
{
    int a = n % 10;
    int b = (n / 10) % 10;
    int c = (n / 100) % 10;
    int d = (n / 1000);
    if (a == b || b == c || c == d || d == a || a == c || b == d)
        return 0;
    else
        return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;
    x++;
    while (true)
    {
        if (checkuni(x))
        {
            cout << x;
            break;
        }
        else
            x++;
    }
    return 0;
}