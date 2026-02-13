#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> x[i];
    }

    sort(x, x + 4);

    long long total = x[3]; // a+b+c

    cout << total - x[2] << " "
         << total - x[1] << " "
         << total - x[0] << endl;

    return 0;
}
