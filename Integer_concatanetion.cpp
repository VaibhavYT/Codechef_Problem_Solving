#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c = 0;
        int n, l, r;
        cin >> n >> l >> r;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {

                string str = to_string(arr[i]);
                string str1 = to_string(arr[j]);
                string result = str + str1;
                int myint1 = stoi(result);
                cout << myint1 << endl;
                if (l <= myint1 <= r)
                {
                    c++;
                }

                
            }
        }
        cout << c << endl;
    }
}