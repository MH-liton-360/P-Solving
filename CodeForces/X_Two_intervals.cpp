#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // vector<pair<int, int>> v(2);
    // for (auto &p : v)
    //     cin >> p.first >> p.second;

    // int l = max(v[0].first, v[1].first);
    // int r = min(v[0].second, v[1].second);

    // cout << (l <= r ? to_string(l) + " " + to_string(r) : "-1") << "\n";

    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    int first = max(l1, l2);
    int second = min(r1, r2);

    if (first <= second)
        cout << first << " " << second << "\n";
    else
        cout << "-1\n";
    return 0;
}
