#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> v(n);
    int even = 0, odd = 0, pos = 0, neg = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (v[i] % 2 == 0)
            even++;
        else
            odd++;
        if (v[i] > 0)
            pos++;
        if (v[i] < 0)
            neg++;
    }
    cout << "Even: " << even << "\n"
         << "Odd: " << odd << "\n"
         << "Positive: " << pos << "\n"
         << "Negative: " << neg << "\n";

    return 0;
}