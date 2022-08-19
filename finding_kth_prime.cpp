#include <bits/stdc++.h>
using namespace std;
  vector<int> v(90000001);
    bool arr[90000001];
void sieve()
{
  
    int max = 90000001;
    arr[0] = arr[1] = true;

    for (int i = 2; i <= max; i++)
    {
        if (arr[i] == false)
        {
            for (int j = i * i; j <= max; j += i)
            {
                arr[i] = true;
            }
        }
    }
    for (int i= 2; i <= max; i++)
    {
        if (arr[i] == false)
        {
            v.push_back(arr[i]);
        }
    }
}
int main()
{
    sieve();
    int k;
    cin >> k;

    cout << v[k - 1] << endl;
    return 0;
}