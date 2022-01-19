// B. Sail
// https://codeforces.com/problemset/problem/298/B
// Time 30 ms
// Memory 260 KB
// Rating 1200

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;
    string dir;
    cin >> dir;

    char horizontal = 'E', vertical = 'N';
    int diffx = ex - sx, diffy = ey - sy;
    if (diffx < 0)
    {
        horizontal = 'W';
        diffx = diffx * (-1);
    }
    if (diffy < 0)
    {
        vertical = 'S';
        diffy = diffy * (-1);
    }

    int exact_time, x = 0, y = 0;

    for (exact_time = 0; exact_time < t; exact_time++)
    {
        if (dir[exact_time] == horizontal)
            x++;
        else if (dir[exact_time] == vertical)
            y++;

        if (x >= diffx && y >= diffy)
            break;
    }

    if (x >= diffx && y >= diffy)
        cout << exact_time + 1 << "\n";
    else
        cout << "-1"
             << "\n";

    return 0;
}