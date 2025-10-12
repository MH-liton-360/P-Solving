#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    char s;
    cin >> a >> s >> b;

    if ((s == '<' && a < b) || (s == '>' && a > b) || (s == '=' && a == b))
        cout << "Right\n";
    else
        cout << "Wrong\n";

    return 0;
}