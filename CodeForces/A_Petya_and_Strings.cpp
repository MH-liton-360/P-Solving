#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.size(); i++)
    {
        char Sl = toupper(s1[i]);
        char Cl = toupper(s2[i]);
        if (Sl < Cl)
        {
            cout << "-1" << "\n";
            return 0;
        }
        else if (Sl > Cl)
        {

            cout << "1" << "\n";
            return 0;
        }
    }
    cout << "0\n";

    return 0;
}
