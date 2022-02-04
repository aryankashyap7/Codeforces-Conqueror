// B. T-primes
// https://codeforces.com/problemset/problem/230/B
// Time 716 ms
// Memory 200 KB
// Rating 1300
// Editorial By Alok Khansali

#include <bits/stdc++.h>    //The first idea here is to know that only squares have odd factors.
using namespace std;        //If a number is prime, its square is a 3 divisor number
typedef long long int lli;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double n,x;
    cin >> n;
    vector<bool> primo(1000001,true);
    primo[0] = primo[1] = false;
    for(int i = 2;i * i <= 1000001;i++)               //Getting the prime numbers
    {
        if(primo[i] == true)
        {
            for(int j = i*i;j <= 1000001;j+=i)
            primo[j] = false;
        }
    }
    while(n--)
    {
        cin >> x;
        if(sqrt(x) != floor(sqrt(x)))                   //If its not a perfect square, it will never be our number
            puts("NO");
        else
            puts((primo[sqrt(x)]) ? "YES" : "NO");
    }
    return 0;
} 