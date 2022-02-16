// A. Boy or Girl
// https://codeforces.com/problemset/problem/236/A
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
    set<char> st;

    for (int i = 0; i < s.size(); i++)
    {
        st.insert(s[i]);
    }
    if (st.size() & 1)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
    return 0;
}