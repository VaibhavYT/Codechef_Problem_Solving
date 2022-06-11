#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        do
        {
            ans.push_back(a);

        }
        while (next_permutation(a.begin(),a.end());
        cout<<ans<<endl;
    }
}
