#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;
    if (abs(a - b) <= 1 && (a + b) > 0) // abs() means absolute value, i.e. it always returns a positive number.
        // So this condition checks whether the difference between a and b is at most 1.
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
