#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a;
    cin >> a;

    // int squared = pow(a, 2);

    // vector<int> digits;

    // int temp = squared;
    // while (temp > 0)
    // {
    //     /* code */
    //     digits.push_back(temp % 10);
    //     temp /= 10;
    // }

    // sort(digits.begin(), digits.end());

    // int sum = 0;
    // for (int &x : digits)
    // {
    //     /* code */
    //     sum += x;
    // }

    int step_1 = (a * a); // square = 32*32;

    int step_2 = 0; // here step_2 is sum i mean sum = 0;
    int temp = step_1;

    while (temp > 0)
    {
        /* code */
        step_2 += temp % 10; // findout last digit and store digit
        temp /= 10;          // last digit removed;
    }

    int step_3 = (step_2 * step_2);       // square = 7*7;
    int step_4 = step_1 - step_3;         // subtract = 1024-49;
    long long step_5 = (step_4 * step_4); // square = 975*975;
    // int k;
    // cin >> k;
    // long long step_6 = step_5 % int(pow(10, k));
    long long step_6 = step_5 % 10; // last digit print = 950625 % 10;

    cout << step_6 << "\n";

    return 0;
}
