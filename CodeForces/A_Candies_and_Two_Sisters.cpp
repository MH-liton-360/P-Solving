#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        long long number = (n - 1) / 2;

        if (n <= 2)
            cout << "0\n";
        else
            cout << number << "\n";
    }

    return 0;
}