#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   int t;
   cin>>t;
   while(t--){
     int n,x,c;
     cin>>n>>x>>c;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     sort(arr,arr+n);
     int sum=0;
     int curr;
     int cost;
     for(int i=0;i<n;i++)
     {
         curr= x-arr[i];
         if(curr>c){
             sum += x;
             cost++;
         }else{
             sum+=arr[i];
         }
         curr=0;
         
     }
     cout<<(sum)-(cost*c)<<endl;
     //cout<<(cost*c)<<endl;
     cost=0;
   }
	return 0;
}