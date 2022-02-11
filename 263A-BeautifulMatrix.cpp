// A. Beautiful Matrix
// https://codeforces.com/problemset/problem/263/A
// Time 30 ms
// Memory 0 KB
// Rating 800

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int xpos, ypos, x = 0, y = 0;
    int temp, size = 25;
    while (size--)
    {
        cin >> temp;
        if (temp == 1)
        {
            xpos = x;
            ypos = y;
        }
        x++;
        if (x % 5 == 0)
        {
            x = 0;
            y++;
        }
    }

    // cout << xpos << " " << ypos << endl;

    int ans;
    if (xpos == 2 && ypos == 2)
        ans = 0;
    else if (xpos == 2)
        ans = abs(ypos - 2);
    else if (ypos == 2)
        ans = abs(xpos - 2);
    else
        ans = abs(xpos - 2) + abs(ypos - 2);

    cout << ans;

    return 0;
}