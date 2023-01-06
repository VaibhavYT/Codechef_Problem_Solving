#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   int t;
   cin>>t;
   unordered_map<int,int> m;
   int flag =0;
   while(t--){
     int n;
    cin>>n;
    int arr[2*n];
    
    
    for(int i =0;i<2*n;i++){
        cin>>arr[i];
        m[arr[i]]++;

    }
    for(auto x:m){
        if(x.second>2){
           flag++;
            break;
        }
    }
    // cout<<flag<<endl;
    if(flag==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   flag=0;
   m.clear();
   
}
	return 0;
}
