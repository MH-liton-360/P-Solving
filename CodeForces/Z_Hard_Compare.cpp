#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    double a, b, c, d;
    cin >> a >> b >> c >> d;

    double A = (b * log(a));
    double B = (d * log(c));

    if (A > B)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}