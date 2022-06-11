#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;
    int s, p, v;
    int max = 0;
    int sum = 0;
    while (t--)
    {

        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> s >> p >> v;
            if (p > s)
            {
                max = (p / (s + 1)) * v;
                if(max>sum){
                    sum= max;
                }
            }
        }
        cout<<sum<<endl;
        sum =0;
    }
}