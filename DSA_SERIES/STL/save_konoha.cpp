#include<bits/stdc++.h>
using namespace std;
int main(){
    long t;
    cin>>t;
    long c= 0;
    while (t--)
    {
        long n,z;
        cin>>n>>z;
        long long arr[n];
        for (long i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr + n, greater<int>());
       long i=0;
        while (z>0)
        {
            
            if(arr[i]<=z){
                z= z-arr[i];
                arr[i] = arr[i]/2;
                i++;
                c++;
            }
            else
            {
                i++;
            }
            
        }
        cout<<c<<endl;
        
    }
    return 0;
    
}