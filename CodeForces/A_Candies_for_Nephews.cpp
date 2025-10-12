#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int add = (n % 3);
        if (n % 3 != 0)
            cout << 3 - add << "\n";
        else
            cout << "0\n";
    }

    return 0;
}
