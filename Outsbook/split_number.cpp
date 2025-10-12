#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // int n, k;
    // cin >> n >> k; // akhane k holo last kot digit find out korbo.

    // int split = n % int(pow(10, k));
    // int split2 = n / int(pow(10, k));

    // cout << split << "\n"
    //      << split2 << "\n";

    int n;
    cin >> n;

    int split = n % 100;
    int split2 = n / 100;

    cout << split2 << "\n"
         << split << "\n";

    return 0;
}