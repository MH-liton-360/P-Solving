#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    string s;

    cin >> n >> s;

    int cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        /* code */
        if (s[i] == s[i - 1])
            cnt++;
    }
    cout << cnt << "\n";
    return 0;
}