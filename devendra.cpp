#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long z, y, a, b, c;
        cin >> z >> y >> a >> b >> c;
        long long sum = z - y;
        long long add = a + b + c;
        if (sum >= add)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}