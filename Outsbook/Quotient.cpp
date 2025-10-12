#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int X1, Q1, R1, X2;
    cin >> X1 >> Q1 >> R1 >> X2;

    int First_output = ((X1 * Q1) + R1);
    int quotient = First_output / X2;
    int remainder = First_output % X2;

    cout << quotient << " " << remainder << "\n";

    return 0;
}