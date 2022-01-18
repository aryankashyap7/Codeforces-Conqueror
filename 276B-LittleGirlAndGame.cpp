// B. Little Girl and Game
// https://codeforces.com/problemset/problem/276/B
// Time 30 ms
// Memory 8 KB
// Rating 1300

#include <bits/stdc++.h>
using namespace std;
bool is_valid(string s)
{
    //All similar Elements, eg. aa, bbbbbb, ccccccccccccc, etc.
    for (int x = 0; x < s.size() - 1; x++)
        if (s[x] != s[x + 1])
            return false;

    return true;
}

bool same(string s)
{
    //All character count even, eg. aa, bbbbaa, cccc, etc.
    int n = s.length();
    int freq[26] = {0};
    for (int i = 0; i < n; i++)
    {
        if (s[i] % 2 == 1)
            freq[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] % 2 == 1)
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    // s.size() == ODD then [First else Second]
    if (s.size() % 2 != 0 || is_valid(s) == true || ((same(s) == true && is_valid(s) == false)))
        cout << "First"
             << "\n";
    else
        cout << "Second"
             << "\n";
    return 0;
}