// A. Adding Digits
// https://codeforces.com/problemset/problem/260/A
// Time 15 ms
// Memory 0 KB
// Rating 1400
// Editorial by Alok Khansali

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);
    int a,b,n,t = 0, f = 1;
    cin >> a >> b >> n;
    t = a;
    if(a%b != 0)
    {
        n -= 1;
        f = 0;
        for(int i = 0; i<=9;i++)
        {
              t = a*10 + i;
              if(t % b  == 0)
              {
                  f = 1;
                  break;
              }
        }
    }
    if(f)
    {
        cout << t;
        for(int i =0;i<n;i++)
        cout << 0;
    }
    else
    cout <<  -1;
    return 0;
}