// B. Letter
// https://codeforces.com/problemset/problem/43/B
// Time 30 ms
// Memory 0 KB
// Rating 1100

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int small[26] = {0}, large[26] = {0};
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            small[s[i] - 'a']++;
        else
            large[s[i] - 'A']++;
    }
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            small[s[i] - 'a']--;
        else
            large[s[i] - 'A']--;
    }
    string ans = "YES";

    for (int i = 0; i < 26; i++)
    {
        if (small[i] < 0 || large[i] < 0)
        {
            ans = "NO";
            break;
        }
    }
    cout << ans << "\n";

    return 0;
}