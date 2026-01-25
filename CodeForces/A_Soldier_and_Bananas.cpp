#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n, w;
    cin >> k >> n >> w;

    int sum = 0;

    for (int i = 1; i <= w; i++)
    {
        /* code */
        sum += i * k;
    }
    int borrow = max(0, sum - n);
    cout << borrow << "\n";

    return 0;
}