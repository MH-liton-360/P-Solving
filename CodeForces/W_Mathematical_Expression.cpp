#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    if ((s == '+' && a + b == c) || (s == '-' && a - b == c) || (s == '*' && a * b == c))
        cout << "Yes\n";
    else

        cout << (s == '+' ? a + b : s == '-' ? a - b
                                             : a * b); // if-else shhort version

    return 0;
}

// Jehetu akhane sob kisu constant tai er time complexity holo: Big O notation constant- O(1);