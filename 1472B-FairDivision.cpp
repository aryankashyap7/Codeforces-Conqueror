// B. Fair Division
// https://codeforces.com/contest/1472/problem/B
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
        int n, temp, c1 = 0, c2 = 0, sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            sum += temp;
            if (temp == 1)
                c1++;
            else
                c2++;
        }
        if (sum % 2 != 0)
        {
            printf("NO\n");
        }
        else
        {
            sum = sum / 2;
            if (sum % 2 == 0 || (sum % 2 == 1 && c1 != 0))
                printf("YES\n");
            else
                printf("NO\n");
        }
    }

    return 0;
}
