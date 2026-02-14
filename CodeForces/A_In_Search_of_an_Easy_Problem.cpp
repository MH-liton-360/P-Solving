#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, x;
    cin >> t;

    while (t--)
    {
        cin >> x;
        if (x == 1)
        {
            cout << "HARD\n";
            return 0;
        }
    }
    cout << "EASY\n";

    return 0;
}