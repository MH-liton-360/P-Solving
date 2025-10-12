#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int Y = N % 365;
    int yy = N / 365;

    int M = Y % 30;
    int mm = Y / 30;

       cout << yy << " years\n"
         << mm << " months\n"
         << M << " days\n";

    return 0;
}
