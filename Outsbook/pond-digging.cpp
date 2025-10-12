#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int L, W, l, w;
    cin >> L >> W >> l >> w;

    int length = 2 * l;
    int width = 2 * w;
    int calculate_pond_edge = ((L - length) * (W - width));
    int calculate_pond_of_area = (L * W) - calculate_pond_edge;
    cout << calculate_pond_of_area << "\n";

    return 0;
}