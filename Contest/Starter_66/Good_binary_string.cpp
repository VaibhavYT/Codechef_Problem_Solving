#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   int t;
   cin>>t;
   while(t--){
     string s;
     cin>>s;
     int n = s.size();
     if(s[0]==s[n-1]){
        cout<<n-2<<endl;
     }
     else{
        cout<<2<<endl;
     }
   }
	return 0;
}
