#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int main()
{
    fast_io;
    ll t;
    cin >> t;

    while (t--)
    {
        ll L, R;
        cin >> L >> R;

        ll sum = (R * 1LL * (R + 1)) / 2 - ((L - 1) * 1LL * L) / 2;
        cout << sum << "\n";
    }

    return 0;
}
