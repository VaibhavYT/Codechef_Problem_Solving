#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
   
    while(t--)
    {
         int sum = 0;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 1; i < n; i++)
        {
            sum =sum+ arr[i];
        }
        cout << sum << endl;
        
    }
    
}