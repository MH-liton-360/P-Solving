#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v(3);
    for (int &x : v)
        cin >> x;

    vector<int> original = v;

    sort(v.begin(), v.end());
    for (int &x : v)
        cout << x << "\n";
    cout << "\n";

    // sort(v.begin(), v.end(), greater<int>());
    for (int &x : original)
        cout << x << "\n";
    cout << "\n";

    return 0;
}