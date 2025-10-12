#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    double x, y;
    cin >> x >> y;

    double X = (x + y) / 2;
    double Y = (x - y) / 2;

    double one_n = X / Y;
    double divided = X * Y;

    cout << fixed << setprecision(2) << one_n << "\n"
         << divided << "\n";
    return 0;
}