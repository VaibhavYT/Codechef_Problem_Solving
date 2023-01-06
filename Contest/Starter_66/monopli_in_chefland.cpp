#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   int t;
   cin>>t;
   while(t--){
   int a,b,c;
   cin>>a>>b>>c;
   vector<int>v;
   v.push_back(a);
   v.push_back(b);
   v.push_back(c);
   sort(v.begin(),v.end());
   if(v[2]>v[0]+v[1]){
       cout<<"YES"<<endl;
       
   }
   else{
       cout<<"NO"<<endl;
   }
   
	}
return 0;
}