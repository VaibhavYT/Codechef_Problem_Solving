#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;
    string s;
    while (t--)
    {
        int n;
        string s;
        int c = 0;
        //bool a =true;
        cin >> n;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
            {
                c++;
                if (c == 4)
                    break;
            }
            else{
                c=0;
            }
            // cout<<c<<" ";
        }
        if(c==4)
            cout<<"NO\n";
        else
            cout << "YES" << endl;
    }
    return 0;
}