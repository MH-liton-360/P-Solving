#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    double M, V;
    cin >> M >> V;

    double length_cm = ((M / 10) + (V * 0.01));
    cout << fixed << setprecision(2) << length_cm << " cm" << endl;

    return 0;
}
