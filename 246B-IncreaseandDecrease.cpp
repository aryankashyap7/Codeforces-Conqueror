// B. Increase and Decrease
// https://codeforces.com/problemset/problem/246/B
// Time 62 ms
// Memory 0 KB
// Rating 1300

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n,s=0,x=0;
cin >> n;
for(int i =0;i<n;i++)
{
cin >> x;
s += x;
}
if(s%n == 0)
cout << n;
else
cout << n-1;
return 0;
}