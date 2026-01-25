#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    sort(s.begin(), s.end());
    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        /* code */
        if (s[i] != s[i + 1])
            count++;
    }
    if (count % 2 == 0)
        cout << "CHAT WITH HER!\n";
    else
        cout << "IGNORE HIM!\n ";

    return 0;
}