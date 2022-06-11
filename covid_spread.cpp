#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int i = 0;
    while (t--)
    {
        long long int n, d, sum;
        cin >> n >> d;
        if (d <= 10)
        {
            sum = pow(2, d);
        }
        else if (d <= 20)
        {
            sum = 1024 * pow(3, d - 10);
        }
        else
        {
            cout << n << endl;
            continue;
        }
        if (sum > n)
        {
            cout << n << endl;
        }
        else
        {
            cout << sum << endl;
        }
    }
}