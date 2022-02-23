// A. Word
// https://codeforces.com/problemset/problem/59/A
// Time 30 ms
// Memory 0 KB
// Rating 800

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int n = s.size();
    int lower = 0, upper = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            lower++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            upper++;
        }
    }
    if (lower >= upper)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << endl;
    }

    return 0;
}