#include <bits/stdc++.h>
using namespace std;
int main()

{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int BT, BL;
    cin >> BT >> BL;

    int total_run_average = ((BT * 6) + (BL * 4)) / 10;
    cout << total_run_average << "\n";

    return 0;
}
