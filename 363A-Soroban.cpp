// A. Soroban
// https://codeforces.com/problemset/problem/363/A
// Time 15 ms
// Memory 0 KB
// Rating 800

#include <bits/stdc++.h>
using namespace std;

void soroban(int n)
{
    if (n == 0)
        cout << "O-|-OOOO\n";
    else if (n == 1)
        cout << "O-|O-OOO\n";
    else if (n == 2)
        cout << "O-|OO-OO\n";
    else if (n == 3)
        cout << "O-|OOO-O\n";
    else if (n == 4)
        cout << "O-|OOOO-\n";
    else if (n == 5)
        cout << "-O|-OOOO\n";
    else if (n == 6)
        cout << "-O|O-OOO\n";
    else if (n == 7)
        cout << "-O|OO-OO\n";
    else if (n == 8)
        cout << "-O|OOO-O\n";
    else if (n == 9)
        cout << "-O|OOOO-\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, rem;
    cin >> n;
    if (n == 0)
        cout << "O-|-OOOO\n";
    while (n > 0)
    {
        rem = n % 10;
        soroban(rem);
        n = n / 10;
    }

    return 0;
}

// EDITORIAL BY ALOK KHANSALI

// #include <iostream>  //8 mins
// using namespace std; //But code is good
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     int n;
//     cin >> n;
//     if (n == 0)
//         cout << "O-|-OOOO";
//     while (n)
//     {
//         int x = n % 10;
//         if (x >= 5)
//         {
//             cout << "-O|";
//             x -= 5;
//         }
//         else
//             cout << "O-|";
//         for (int i = 0; i < x; i++)
//             cout << "O";
//         cout << '-';
//         for (int i = 0; i < 4 - x; i++)
//             cout << "O";
//         ;
//         n /= 10;
//         cout << '\n';
//     }
//     return 0;
// }