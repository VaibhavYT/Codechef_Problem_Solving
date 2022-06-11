#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        long long arr[n];
        for (long long i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long max = (arr[n-1]-arr[0])*arr[n-2];
        cout<<max<<endl;
    }
    
}