// B. Sum of Digits
// https://codeforces.com/problemset/problem/102/B
// Time 30 ms
// Memory 300 KB
// Rating 1000


#include <bits/stdc++.h>
using namespace std;
int jadoo(string str)
{
    int sum = 0;
    for (int i = 0; i < str.length(); i++)
    {
        sum += int(str[i] - '0');
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string t;
    cin >> t;

    int count = 0;
    // cout << jadoo(t);
    while (t.length() > 1)
    {
        t = to_string(jadoo(t));

        count++;
    }

    cout << count;

    return 0;
}