#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int count=0;
        int n,h;
        cin>>n>>h;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];

        }
        sort(arr,arr+n);
        for (int i = 0; i <n ; i++)
        {
            if (arr[i]>h)
            {
                count++;

            }
            
        }
        cout<<count<<endl;

    }
    
}