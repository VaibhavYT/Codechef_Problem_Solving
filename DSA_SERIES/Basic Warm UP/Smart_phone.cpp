#include <iostream>
#include<bits/stdc++.h>

using namespace std;

long long maxp(long long arr[], long long n){
sort(arr, arr+n);
long long ans = arr[0];
for(long long i=0; i<n; i++){
    ans=max(ans,arr[i]*(n-i));
}
cout<<ans;
}

int main() {
long long n;
cin>>n;
long long arr[n];
for(long long i=0; i<n; i++){
    cin>>arr[i];
}
maxp(arr, n);
return 0;
}














































/*#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   int n;
    vector<int> v;
    long long s = v.size();
    long long maxi = INT16_MIN;
   while (t--)
   {
       cin>>n;
        v.push_back(n);
   }
   sort(v.begin(),v.end());
   for (int i = 0; i < s; i++)
   {
      // if(v[i]>maxi){
        //   maxi = v[i];
       //}
       cout<<v[i]<<endl;
   }
   
   //cout<<maxi;
   
   return 0;
   
    
}*/