#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    reverse(v.begin(), v.end());

    for (int x : v)
    {
        cout << x << endl;
    }

    return 0;
}